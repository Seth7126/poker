// ============================================================
// 函数名称: sub_405570
// 虚拟地址: 0x405570
// WARP GUID: 386a3f20-ba6c-5ef0-a3ff-3dc3ad4ce11b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: VirtualQuery
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_405598, sub_403b9c
// ============================================================

void* __convention("regparm")sub_405570(int32_t arg1)
{
    // 第一条实际指令: MEMORY_BASIC_INFORMATION buffer
    MEMORY_BASIC_INFORMATION buffer
    VirtualQuery(arg1, &buffer, 0x1c)
    
    if (buffer.State != 0x1000)
        return nullptr
    
    return buffer.AllocationBase
}
