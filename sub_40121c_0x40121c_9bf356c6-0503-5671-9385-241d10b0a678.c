// ============================================================
// 函数名称: sub_40121c
// 虚拟地址: 0x40121c
// WARP GUID: 9bf356c6-0503-5671-9385-241d10b0a678
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: WriteFile
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_40121c(uint16_t arg1, void* arg2, int32_t arg3, void* arg4, char* arg5, void* arg6, int32_t arg7, void* arg8, void* arg9, int32_t arg10, char arg11, void* arg12)
{
    // 第一条实际指令: char eax = arg6.b
    char eax = arg6.b
    void arg_20
    int32_t eflags
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(arg2 + 0x64), &arg_20)
    *(arg2 + 0x64) = temp0
    __bound_gprv_mema32(arg2, *(arg4 + 0x65))
    int32_t eflags_1
    int16_t temp0_1
    temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg3 + (arg5 << 2) - 0x40), arg1)
    *(arg3 + (arg5 << 2) - 0x40) = temp0_1
    *(arg5 * 2) += eax - 0x11
    arg6 = &arg_20
    void* eax_2 = arg12
    
    if (&arg6 == 0xffffffff)
        return WriteFile() __tailcall
    
    void arg_3d
    arg12 = &arg_3d
    int32_t ebp_1 = *(arg8 + 0x65) * 0x2025ff01
    *(arg9 + 0x1c25ffc0) += arg11
    *(arg9 + 0x1825ffc0) += arg11
    *(arg9 + 0x1425ffc0) += arg11
    *(arg9 + 0x1025ffc0) += arg11
    *(arg9 + 0xc25ffc0) += arg11
    *(arg9 + 0x825ffc0) += arg11
    *(arg9 + 0x425ffc0) += arg11
    *(arg9 + 0x25ffc0) += arg11
    *(arg9 - 0x3da0040) += arg11
    *(arg9 - 0x7da0040) += 0x7a
    *(arg9 - 0xbda0040) += 0x7a
    *(arg9 - 0xfda0040) += 0x7a
    *(arg9 + 0x3425ffc0) += 0x7a
    *(arg9 - 0x13da0040) += 0x7a
    *(arg9 - 0x17da0040) += 0x7a
    *(arg9 - 0x1bda0040) += 0x7a
    *(arg9 + 0x3025ffc0) += 0x7a
    *(arg9 - 0x1fda0040) += 0x7a
    *(arg9 - 0x23da0040) += 0x7a
    *(arg9 - 0x27da0040) += 0x7a
    *(arg9 - 0x2bda0040) += 0x7a
    *(arg9 - 0x2fda0040) += 0x7a
    *(arg9 - 0x33da0040) += 0x7a
    *(arg9 - 0x37da0040) += 0x7a
    *(arg9 - 0x3bda0040) += 0x7a
    *(arg9 - 0x3fda0040) += 0x7a
    *(arg9 - 0x43da0040) += 0x7a
    *(arg9 - 0x47da0040) += 0x7a
    *(arg9 - 0x4bda0040) += 0x7a
    *(arg9 - 0x4fda0040) += 0x7a
    *(arg9 + 0x2c25ffc0) += 0x7a
    *(arg9 - 0x53da0040) += 0x7a
    *(arg9 - 0x57da0040) += 0x7a
    *(arg9 - 0x5bda0040) += 0x7a
    *(arg9 - 0x5fda0040) += 0x7a
    *(arg9 + 0x4425ffc0) += 0x7a
    *(arg9 + 0x4025ffc0) += 0x7a
    *(arg9 + 0x3c25ffc0) += 0x7a
    *(arg9 - 0x63da0040) += 0x7a
    *(arg9 - 0x67da0040) += 0x7a
    *(arg9 - 0x6bda0040) += 0x7a
    *(arg9 + 0x6425ffc0) += 0x7a
    *(arg9 + 0x6025ffc0) += 0x7a
    *(arg9 + 0x5c25ffc0) += 0x7a
    *(arg9 + 0x5825ffc0) += 0x7a
    *(arg9 + 0x5425ffc0) += 0x7a
    *(arg9 + 0x5025ffc0) += 0x7a
    *(arg9 + 0x4c25ffc0) += 0x7a
    *(arg9 - 0x6fda0040) += 0x7a
    *(arg9 - 0x73da0040) += 0x7a
    *(arg9 - 0x3b7cac40) += 0x7a
    *(eax_2 + (ebp_1 << 3) + 0x39) += 0x7a
    undefined
}
