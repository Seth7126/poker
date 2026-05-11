// ============================================================
// 函数名称: sub_4b0df4
// 虚拟地址: 0x4b0df4
// WARP GUID: 8691318b-291c-5dab-aa42-25acf93f7f6e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_4b0e14
// [被调用的父级函数]: sub_4b17c4
// ============================================================

int32_t __convention("regparm")sub_4b0df4(void* arg1, char** arg2)
{
    // 第一条实际指令: return sub_403e4c(arg2, *(sub_4b0e14(arg1) + 0x70))
    return sub_403e4c(arg2, *(sub_4b0e14(arg1) + 0x70))
}
