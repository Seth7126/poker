// ============================================================
// 函数名称: sub_406cd4
// 虚拟地址: 0x406cd4
// WARP GUID: 088edd58-adc7-5dc5-afa9-ffda3fdfefa3
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleHandleA
// [内部子函数调用]: sub_406c88, sub_403b30
// [被调用的父级函数]: sub_52de46, _start
// ============================================================

int32_t* __convention("regparm")sub_406cd4(int32_t arg1)
{
    // 第一条实际指令: HMODULE eax = GetModuleHandleA(nullptr)
    HMODULE eax = GetModuleHandleA(nullptr)
    data_5314dc = eax
    data_52e0bc = eax
    data_52e0c0 = 0
    data_52e0c4 = 0
    sub_406c88()
    return sub_403b30(arg1, 0x52e0b8)
}
