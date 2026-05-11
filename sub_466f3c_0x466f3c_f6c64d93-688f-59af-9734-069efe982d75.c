// ============================================================
// 函数名称: sub_466f3c
// 虚拟地址: 0x466f3c
// WARP GUID: f6c64d93-688f-59af-9734-069efe982d75
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_40b5a8
// [被调用的父级函数]: sub_467208
// ============================================================

void __convention("regparm")sub_466f3c(int32_t arg1) __noreturn
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    char var_8 = 0xb
    int32_t edx
    edx.b = 1
    sub_40b5a8(0x466ec0, edx, data_530344, 0, &var_c)
    sub_403828()
    noreturn
}
