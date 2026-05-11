// ============================================================
// 函数名称: sub_408f6c
// 虚拟地址: 0x408f6c
// WARP GUID: b7de7f25-139a-5b8f-b838-039960521e17
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ReadFile
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_412a7c
// ============================================================

uint32_t __convention("regparm")sub_408f6c(HANDLE arg1, uint8_t* arg2, uint32_t arg3)
{
    // 第一条实际指令: uint32_t numberOfBytesRead = arg3
    uint32_t numberOfBytesRead = arg3
    
    if (ReadFile(arg1, arg2, arg3, &numberOfBytesRead, nullptr) == 0)
        numberOfBytesRead = 0xffffffff
    
    return numberOfBytesRead
}
