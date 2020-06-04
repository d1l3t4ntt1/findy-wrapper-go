package mem

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestMemLedger_Open(t *testing.T) {
	ok := ledger.Open("FINDY_MEM_LEDGER")
	assert.True(t, ok)
}

func TestMemLedger_Write(t *testing.T) {
	ok := ledger.Open("FINDY_MEM_LEDGER")
	assert.True(t, ok)
	err := ledger.Write("testID", "testData")
	assert.NoError(t, err)
	name, value, err := ledger.Read("testID")
	assert.NoError(t, err)
	assert.Equal(t, "testID", name)
	assert.Equal(t, "testData", value)
	err = ledger.Write("testID2", "testData2")
	assert.NoError(t, err)
	name, value, err = ledger.Read("testID2")
	assert.NoError(t, err)
	assert.Equal(t, "testID2", name)
	assert.Equal(t, "testData2", value)
}

func TestMemLedger_Read(t *testing.T) {
	ok := ledger.Open("FINDY_MEM_LEDGER")
	assert.True(t, ok)
	err := ledger.Write("testID", "testData")
	assert.NoError(t, err)

	for i := 0; i < 100; i++ {
		name, value, err := ledger.Read("testID")
		assert.NoError(t, err)
		assert.Equal(t, "testID", name)
		assert.Equal(t, "testData", value)
	}
}
