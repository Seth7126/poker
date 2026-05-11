// ============================================================
// 函数名称: sub_4b1da8
// 虚拟地址: 0x4b1da8
// WARP GUID: 19d34909-eb47-5ddb-92c8-0f6c33b93979
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4b0e20
// [被调用的父级函数]: sub_4b19b0
// ============================================================

int32_t __convention("regparm")sub_4b1da8(void* arg1)
{
    // 第一条实际指令: if (*(sub_4b0e20(arg1) + 0x84) == 0)
    if (*(sub_4b0e20(arg1) + 0x84) == 0)
        return 0
    
    return *(*(sub_4b0e20(arg1) + 0x84) + 4)
}
