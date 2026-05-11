// ============================================================
// 函数名称: sub_408f08
// 虚拟地址: 0x408f08
// WARP GUID: 3001fcd4-6baa-5844-b7d6-3a8b284ed9cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFileA
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_412ac8
// ============================================================

HANDLE __convention("regparm")sub_408f08(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: return CreateFileA(sub_40423c(arg1), *(((arg2 & 3) << 2) + &data_52e144), *(((arg2 & 0xf0) u>> 4 << 2) + &data_52e150), nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr)
    return CreateFileA(sub_40423c(arg1), *(((arg2 & 3) << 2) + &data_52e144), 
        *(((arg2 & 0xf0) u>> 4 << 2) + &data_52e150), nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 
        nullptr)
}
