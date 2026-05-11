// ============================================================
// 函数名称: sub_424508
// 虚拟地址: 0x424508
// WARP GUID: 0ed24fc9-f048-5b8a-9db9-ebace5ba4fd7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_423fbc, sub_42ec9c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424508(int32_t* arg1)
{
    // 第一条实际指令: *(arg1 + 0x1fd) = sub_423fbc(arg1)
    *(arg1 + 0x1fd) = sub_423fbc(arg1)
    return sub_42ec9c(arg1)
}
