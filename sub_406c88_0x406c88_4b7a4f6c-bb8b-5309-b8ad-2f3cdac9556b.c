// ============================================================
// 函数名称: sub_406c88
// 虚拟地址: 0x406c88
// WARP GUID: 4b7a4f6c-bb8b-5309-b8ad-2f3cdac9556b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetModuleFileNameA
// [内部子函数调用]: sub_405780, sub_405a68
// [被调用的父级函数]: sub_406cd4
// ============================================================

int32_tsub_406c88()
{
    // 第一条实际指令: uint8_t filename[0x108]
    uint8_t filename[0x108]
    GetModuleFileNameA(data_5314dc, &filename, 0x105)
    enum WIN32_ERROR eax_2 = sub_405780(&filename)
    data_52e0c8 = eax_2
    
    if (eax_2 == NO_ERROR)
        data_52e0c8 = data_52e0bc
    
    sub_405a68(0x52e0b8)
    return 0x52e0b8
}
