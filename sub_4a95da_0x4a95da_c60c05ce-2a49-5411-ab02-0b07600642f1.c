// ============================================================
// 函数名称: sub_4a95da
// 虚拟地址: 0x4a95da
// WARP GUID: c60c05ce-2a49-5411-ab02-0b07600642f1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415cac, sub_403898, sub_403e4c, sub_403248
// [被调用的父级函数]: 无
// ============================================================

long double __convention("regparm")sub_4a95da(int32_t* arg1, int32_t arg2, void* arg3, int32_t* arg4 @ ebp, long double arg5 @ st0, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: *arg1 += arg1
    *arg1 += arg1
    *arg1 += arg1.b
    long double result = fconvert.t(*(arg1 * 3)) / arg5
    int32_t eflags
    __out_immb_al(0x95, arg1.b, eflags)
    *(arg3 - 0x3ba743d) += arg3.b
    int32_t* entry_ebx
    sub_403e4c(&arg1[0xd], entry_ebx[1])
    
    if (sub_403248(entry_ebx, 0x49946c) != 0)
        *(arg4[-1] + 0x38) = entry_ebx[3]
    
    sub_403898(__return_addr)
    sub_415cac(arg4[-1])
    *arg4
    return result
}
