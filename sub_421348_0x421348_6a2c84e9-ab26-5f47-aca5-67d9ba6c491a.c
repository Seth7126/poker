// ============================================================
// 函数名称: sub_421348
// 虚拟地址: 0x421348
// WARP GUID: 6a2c84e9-ab26-5f47-aca5-67d9ba6c491a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_421310
// ============================================================

int32_t __convention("regparm")sub_421348(char* arg1, int32_t arg2, int32_t arg3, uint16_t* arg4 @ esi, void* arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp_3 = *(arg5 + 0x6e) * &data_416de0
    int32_t ebp_3 = *(arg5 + 0x6e) * &data_416de0
    char* var_4 = arg1
    int32_t var_8 = arg3
    int32_t var_c = arg2
    int32_t entry_ebx
    int32_t var_10 = entry_ebx
    *arg1 += arg1.b
    *(arg3 + (arg5 << 2)) += 1
    *arg1 += arg1:1.b
    arg1[0x80000005] += arg1.b
    char temp0 = *0x6f6c6f43
    *0x6f6c6f43 += arg1.b
    
    if (temp0 + arg1.b u>= temp0)
        jump(0x42136c)
    
    char temp1 = *arg1
    *arg1 += arg1.b
    *arg1 = adc.d(*arg1, arg1, temp1 + arg1.b u< temp1)
    *(arg2 + 1 + (arg4 << 1) + 0x61) |= arg1.b
    *(arg4 + 0x64)
    *arg1 += arg1.b
    int32_t* eax
    char ecx_1
    int32_t edx_1
    int16_t cs
    eax, edx_1, ecx_1 = (*arg1)(zx.d(cs), arg5, arg4, ebp_3, &var_10)
    edx_1:1.b += (entry_ebx.w - 1):1.b
    *eax += eax
    *eax += eax.b
    *eax += eax.b
    char temp2 = *eax
    *eax += eax.b
    eax.b = adc.b(eax.b, *eax, temp2 + eax.b u< temp2)
    *(edx_1 + (arg4 << 1) + 0x61) |= eax.b
    int32_t eflags
    __outsd(edx_1.w, *arg4, arg4, eflags)
    char* gsbase
    *(gsbase + eax) += edx_1.b
    *((eax + 1) * 2) += ecx_1
    undefined
}
