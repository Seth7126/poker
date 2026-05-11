// ============================================================
// 函数名称: sub_40e008
// 虚拟地址: 0x40e008
// WARP GUID: 70b9657b-fc98-57ba-9bdd-ad868615330a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40dfbc, sub_408e80
// [被调用的父级函数]: sub_413618
// ============================================================

int32_t __convention("regparm")sub_40e008(char* arg1, char* arg2)
{
    // 第一条实际指令: if (*arg1 != 1)
    if (*arg1 != 1)
        return sub_40dfbc(arg1, arg2)
    
    return sub_408e80(arg2)
}
