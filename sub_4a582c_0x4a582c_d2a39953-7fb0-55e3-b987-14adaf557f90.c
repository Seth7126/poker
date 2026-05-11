// ============================================================
// 函数名称: sub_4a582c
// 虚拟地址: 0x4a582c
// WARP GUID: d2a39953-7fb0-55e3-b987-14adaf557f90
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4a582c(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ ebp, uint16_t* arg5 @ esi, char* arg6 @ edi, int16_t arg7)
{
    // 第一条实际指令: *arg1
    *arg1
    void* entry_ebx
    entry_ebx:1.b *= 2
    *arg1 += arg1
    *arg1 += arg1.b
    *arg1 += arg1.b
    arg1[-0x20000000].b += arg1.b
    arg1.b = arg1.b
    arg1.b |= 0x4f
    int32_t eflags
    __outsb(arg2.w, *arg5, arg5, eflags)
    uint16_t* esi_1 = *(entry_ebx + 0x63) * 0x656e6e6f
    int32_t eflags_1
    int16_t temp0
    temp0, eflags_1 = __arpl_memw_gpr16(arg7, esi_1.w)
    arg7 = temp0
    *arg1 += arg1.b
    entry_ebx:1.b *= 2
    *(arg1 + 1) += (arg1 + 1).b
    *arg3 += 1
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) += (arg1 + 1).b
    *(arg1 + 1) = *(arg1 + 1)
    char temp1 = *(arg1 + 0x4f090006)
    *(arg1 + 0x4f090006) += (arg1 + 1).b
    char* esi_2 = __outsb((arg2 - 1).w, *esi_1, esi_1, eflags_1)
    int32_t var_3 = arg2 - 1
    int32_t eflags_2
    uint16_t* gsbase
    int16_t temp0_1
    temp0_1, eflags_2 = __arpl_memw_gpr16(*(gsbase + arg4 + 0x69), &var_3)
    *(gsbase + arg4 + 0x69) = temp0_1
    
    if (temp1 == neg.b((arg1 + 1).b) || temp1 + (arg1 + 1).b u< temp1)
        entry_ebx:1.b = entry_ebx:1.b
        int32_t* var_7_1 = arg3
        esi_2[0x5b] ^= entry_ebx.b
        return arg1 + 1
    
    *arg6 = *esi_2
    void* esi_3 = &esi_2[1]
    void* var_7 = esi_3
    *(arg1 + 1) += arg3.b
    entry_ebx:1.b *= 2
    *arg1 += arg1.b
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    *(arg1 + 0x4f060006) += arg1.b
    int32_t esi_4 = __outsb((arg2 - 1).w - 1, *esi_3, esi_3, eflags_2)
    __outsb((arg2 - 1).w - 1, *(gsbase + esi_4), esi_4, eflags_2)
    (*(*arg1 + 0x34))(entry_ebx, arg4, entry_ebx)
    
    if (*(arg1 + 0x3a) != 0)
        arg1[0xf]
        arg1[0xe]()
    
    arg1[9] = 0
    return 0
}
