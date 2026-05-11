// ============================================================
// 函数名称: sub_4372a0
// 虚拟地址: 0x4372a0
// WARP GUID: 18be77d6-cd81-5a6c-b75b-44df9337e660
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41e0b0, sub_437af8
// [被调用的父级函数]: sub_4373c4
// ============================================================

int32_t __convention("regparm")sub_4372a0(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* ebx_1
    int32_t* ebx_1
    void* esi_1
    ebx_1, esi_1 = sub_437af8(arg1, arg2)
    
    if (ebx_1 == 0)
        return (*(**(esi_1 + 0x44) + 0x60))()
    
    if (sub_41e0b0(ebx_1) == 1)
        return (*(*ebx_1 + 0x60))()
    
    (*(*arg3 + 8))()
    int32_t edx_3
    edx_3.b = 1
    (*(*arg3 + 0x68))()
    return (*(*arg3 + 0x60))()
}
