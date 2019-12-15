
// basic types
boolean bTest
uint8   u8Test;
uint16  u16Test;
uint32  u32Test;
uint64  u64Test;

// C99 stdint types
bool_t   bTest
uint8_t  u8Test;
uint16_t u16Test;
uint32_t u32Test;
uint64_t u64Test;

// arrays
uint8_t au8Test[1337];
bool_t  abTest[2];

// complex-types
typedef enum
{
  enuAAAA,
  enuBBBB
} tenuName;

tenuName enuTest;

typedef struct
{
  bool_t bA, uint8_t u8B
} tstrName;

tstrName strTest;

uint8_t* pau8Test = &au8Test;
c = &pstrTest;

const uint8_t cu8Test, ku8Test;
const uint32_t cau32Test[2];
const tstrTest castrTest[3];

typedef (void)(tpfTest*)(void); // highligting needs to be fixed on typedefs

boolean         bVar
uint8           u8UnsignedByte;
uint8_t         au8ArrayOfUnsignedBytes[1337];
bool_t          abArrayOfBools[2];
uint8_t*        pau8PointerToArrayOfUnsignedBytes = &au8Test;

tstrType        strStuct;
tstrType*       pstrPtrToStruct = &strStuct;

const uint8_t   cu8ConstByte, ku8ConstByte; // alternate c / k notation
const uint32_t  cau32ConstU32Array[2];
const tstrTest  castrConstStructArray[3];
const uint32_t* pcau32PointerToConstU32Array = &cau32ConstU32Array
const uint8_t*  const cpcu8ConstPtrToConstUnsignedByte;

tpfFuncPtrType pfFuncPtr
const tpfFuncPtrType cpfFuncPtr
tpfFuncPtrType apfFuncPtrArray[2]
tpfFuncPtrType* const cpapfConstPtrToArrayOfFuncPtrs = &apfFuncPtrArray


// TODO
// FIXME
// BUG
// WTF
