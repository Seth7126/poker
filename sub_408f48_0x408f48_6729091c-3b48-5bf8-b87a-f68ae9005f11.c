// ============================================================
// 函数名称: sub_408f48
// 虚拟地址: 0x408f48
// WARP GUID: 6729091c-3b48-5bf8-b87a-f68ae9005f11
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CreateFileA
// [内部子函数调用]: sub_40423c
// [被调用的父级函数]: sub_46d884, sub_412ac8, sub_47be18
// ============================================================

HANDLE __convention("regparm")sub_408f48(int32_t arg1)
{
    // 第一条实际指令: return CreateFileA(sub_40423c(arg1), 0xc0000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr)
    return CreateFileA(sub_40423c(arg1), 0xc0000000, FILE_SHARE_NONE, nullptr, CREATE_ALWAYS, 
        FILE_ATTRIBUTE_NORMAL, nullptr)
}
