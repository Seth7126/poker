// ============================================================
// 函数名称: sub_40b714
// 虚拟地址: 0x40b714
// WARP GUID: a11df433-5a0b-51ba-8d9b-e07e5d6df395
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b4b0, sub_40b6b0, sub_40b774
// [被调用的父级函数]: sub_40d8c4
// ============================================================

int32_t __convention("regparm")sub_40b714(char* arg1, int32_t arg2, char* arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: int16_t cs
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    arg2.b |= *(arg4 + (arg1 << 1) + 0x78)
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(arg4 + 0x70), &var_4)
    *(arg4 + 0x70) = temp0
    int32_t entry_ebx
    
    if (arg2.b == 0)
        return sub_40b774((*(entry_ebx - 0x3d))()) __tailcall
    
    int32_t eflags_1
    int16_t* gsbase
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(gsbase + arg1), arg3.w)
    *(gsbase + arg1) = temp0_1
    *arg1 += arg1.b
    *arg3 += arg1.b
    *arg1 += arg1.b
    arg1[arg2 + 0x40040] += entry_ebx:1.b
    *arg1 += arg1.b
    int32_t var_8 = entry_ebx
    
    if (arg1 == 1)
        data_531600
    else if (arg1 == 2)
        data_531604
    else if (arg1 - 3 u< 0x16)
        void* edx_4
        edx_4.b = 1
        sub_40b4b0(*((arg1 << 3) + &data_52e230), edx_4, *((arg1 << 3) + 0x52e234))
    else
        sub_40b6b0()
    
    int32_t var_c = arg2
    noreturn sub_403828() __tailcall
}
