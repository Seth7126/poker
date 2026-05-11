// ============================================================
// 函数名称: sub_4a3ee4
// 虚拟地址: 0x4a3ee4
// WARP GUID: a922ad05-86e2-56a3-b48b-f781442588a5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410b1c, sub_403018, sub_403e4c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a3ee4(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403018(arg1) != sub_403018(arg2))
    if (sub_403018(arg1) != sub_403018(arg2))
        int32_t ecx
        return sub_410b1c(ecx, arg2)
    
    sub_403e4c(&arg1[5], arg2[5])
    arg1[7] = arg2[7]
    sub_403e4c(&arg1[6], arg2[6])
    int32_t result = arg2[8]
    arg1[8] = result
    return result
}
