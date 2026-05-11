// ============================================================
// 函数名称: sub_443bbc
// 虚拟地址: 0x443bbc
// WARP GUID: fbe9eba8-9809-5ed0-aa73-0778e5670409
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41f678, sub_443bb4
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_443bbc(void* arg1)
{
    // 第一条实际指令: if (sub_443bb4(arg1) != 0 && sub_41f678(*(arg1 + 0x228)) != 0)
    if (sub_443bb4(arg1) != 0 && sub_41f678(*(arg1 + 0x228)) != 0)
        int32_t result
        result.b = 1
        return result
    
    return 0
}
