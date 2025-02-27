/* { dg-do compile } */
/* { dg-require-effective-target arm_simd32_ok } */
/* { dg-add-options arm_simd32 } */

#include <arm_acle.h>

int16x2_t
test_sxtab16 (int16x2_t a, int8x4_t b)
{
  return __sxtab16 (a, b);
}

/* { dg-final { scan-assembler-times "sxtab16\t...?, ...?, ...?" 1 } } */


int16x2_t
test_sxtb16 (int8x4_t a)
{
  return __sxtb16 (a);
}

/* { dg-final { scan-assembler-times "sxtab16\t...?, ...?" 1 } } */

int8x4_t
test_qadd8 (int8x4_t a, int8x4_t b)
{
  return __qadd8 (a, b);
}

/* { dg-final { scan-assembler-times "\tqadd8\t...?, ...?, ...?" 1 } } */

int8x4_t
test_qsub8 (int8x4_t a, int8x4_t b)
{
  return __qsub8 (a, b);
}

/* { dg-final { scan-assembler-times "\tqsub8\t...?, ...?, ...?" 1 } } */

int8x4_t
test_shadd8 (int8x4_t a, int8x4_t b)
{
  return __shadd8 (a, b);
}

/* { dg-final { scan-assembler-times "\tshadd8\t...?, ...?, ...?" 1 } } */

int8x4_t
test_shsub8 (int8x4_t a, int8x4_t b)
{
  return __shsub8 (a, b);
}

/* { dg-final { scan-assembler-times "\tshsub8\t...?, ...?, ...?" 1 } } */

uint8x4_t
test_uhadd8 (uint8x4_t a, uint8x4_t b)
{
  return __uhadd8 (a, b);
}

/* { dg-final { scan-assembler-times "\tuhadd8\t...?, ...?, ...?" 1 } } */

uint8x4_t
test_uhsub8 (uint8x4_t a, uint8x4_t b)
{
  return __uhsub8 (a, b);
}

/* { dg-final { scan-assembler-times "\tuhsub8\t...?, ...?, ...?" 1 } } */

uint8x4_t
test_uqadd8 (uint8x4_t a, uint8x4_t b)
{
  return __uqadd8 (a, b);
}

/* { dg-final { scan-assembler-times "\tuqadd8\t...?, ...?, ...?" 1 } } */

uint8x4_t
test_uqsub8 (uint8x4_t a, uint8x4_t b)
{
  return __uqsub8 (a, b);
}

/* { dg-final { scan-assembler-times "\tuqsub8\t...?, ...?, ...?" 1 } } */

int16x2_t
test_qadd16 (int16x2_t a, int16x2_t b)
{
  return __qadd16 (a, b);
}

/* { dg-final { scan-assembler-times "\tqadd16\t...?, ...?, ...?" 1 } } */

int16x2_t
test_qasx (int16x2_t a, int16x2_t b)
{
  return __qasx (a, b);
}

/* { dg-final { scan-assembler-times "\tqasx\t...?, ...?, ...?" 1 } } */

int16x2_t
test_qsax (int16x2_t a, int16x2_t b)
{
  return __qsax (a, b);
}

/* { dg-final { scan-assembler-times "\tqsax\t...?, ...?, ...?" 1 } } */

int16x2_t
test_qsub16 (int16x2_t a, int16x2_t b)
{
  return __qsub16 (a, b);
}

/* { dg-final { scan-assembler-times "\tqsub16\t...?, ...?, ...?" 1 } } */

int16x2_t
test_shadd16 (int16x2_t a, int16x2_t b)
{
  return __shadd16 (a, b);
}

/* { dg-final { scan-assembler-times "\tshadd16\t...?, ...?, ...?" 1 } } */

int16x2_t
test_shasx (int16x2_t a, int16x2_t b)
{
  return __shasx (a, b);
}

/* { dg-final { scan-assembler-times "\tshasx\t...?, ...?, ...?" 1 } } */

int16x2_t
test_shsax (int16x2_t a, int16x2_t b)
{
  return __shsax (a, b);
}

/* { dg-final { scan-assembler-times "\tshsax\t...?, ...?, ...?" 1 } } */

int16x2_t
test_shsub16 (int16x2_t a, int16x2_t b)
{
  return __shsub16 (a, b);
}

/* { dg-final { scan-assembler-times "\tshsub16\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uhadd16 (uint16x2_t a, uint16x2_t b)
{
  return __uhadd16 (a, b);
}

/* { dg-final { scan-assembler-times "\tuhadd16\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uhasx (uint16x2_t a, uint16x2_t b)
{
  return __uhasx (a, b);
}

/* { dg-final { scan-assembler-times "\tuhasx\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uhsax (uint16x2_t a, uint16x2_t b)
{
  return __uhsax (a, b);
}

/* { dg-final { scan-assembler-times "\tuhsax\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uhsub16 (uint16x2_t a, uint16x2_t b)
{
  return __uhsub16 (a, b);
}

/* { dg-final { scan-assembler-times "\tuhsub16\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uqadd16 (uint16x2_t a, uint16x2_t b)
{
  return __uqadd16 (a, b);
}

/* { dg-final { scan-assembler-times "\tuqadd16\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uqasx (uint16x2_t a, uint16x2_t b)
{
  return __uqasx (a, b);
}

/* { dg-final { scan-assembler-times "\tuqasx\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uqsax (uint16x2_t a, uint16x2_t b)
{
  return __uqsax (a, b);
}

/* { dg-final { scan-assembler-times "\tuqsax\t...?, ...?, ...?" 1 } } */

uint16x2_t
test_uqsub16 (uint16x2_t a, uint16x2_t b)
{
  return __uqsub16 (a, b);
}

/* { dg-final { scan-assembler-times "\tuqsub16\t...?, ...?, ...?" 1 } } */

int32_t
test_smusd (int16x2_t a, int16x2_t b)
{
  return __smusd (a, b);
}

/* { dg-final { scan-assembler-times "\tsmusd\t...?, ...?, ...?" 1 } } */

int32_t
test_smusdx (int16x2_t a, int16x2_t b)
{
  return __smusdx (a, b);
}

/* { dg-final { scan-assembler-times "\tsmusdx\t...?, ...?, ...?" 1 } } */

uint32_t
test_usad8 (uint8x4_t a, uint8x4_t b)
{
  return __usad8 (a, b);
}

/* { dg-final { scan-assembler-times "\tusad8\t...?, ...?, ...?" 1 } } */

uint32_t
test_usada8 (uint8x4_t a, uint8x4_t b, uint32_t c)
{
  return __usada8 (a, b, c);
}

/* { dg-final { scan-assembler-times "\tusada8\t...?, ...?, ...?, ...?" 1 } } */

int64_t
test_smlald (int16x2_t a, int16x2_t b, int64_t c)
{
  return __smlald (a, b, c);
}

/* { dg-final { scan-assembler-times "\tsmlald\t...?, ...?, ...?, ...?" 1 } } */

int64_t
test_smlaldx (int16x2_t a, int16x2_t b, int64_t c)
{
  return __smlaldx (a, b, c);
}

/* { dg-final { scan-assembler-times "\tsmlaldx\t...?, ...?, ...?, ...?" 1 } } */

int64_t
test_smlsld (int16x2_t a, int16x2_t b, int64_t c)
{
  return __smlsld (a, b, c);
}

/* { dg-final { scan-assembler-times "\tsmlsld\t...?, ...?, ...?, ...?" 1 } } */

int64_t
test_smlsldx (int16x2_t a, int16x2_t b, int64_t c)
{
  return __smlsldx (a, b, c);
}

/* { dg-final { scan-assembler-times "\tsmlsldx\t...?, ...?, ...?, ...?" 1 } } */
