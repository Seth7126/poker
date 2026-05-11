// ============================================================
// 函数名称: sub_42acb8
// 虚拟地址: 0x42acb8
// WARP GUID: 3747e359-9864-57cd-8361-7e74b8a7d536
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_403248, sub_416184
// [被调用的父级函数]: sub_42dc00
// ============================================================

void* __convention("regparm")sub_42acb8(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2)
{
    // 第一条实际指令: arg1[0x11].w |= 8
    arg1[0x11].w |= 8
    
    if (sub_403248(arg2->__offset(0x2c).d, 0x427f2c) != 0)
        (*(*arg1 + 0x60))()
    
    void* result = sub_416184(arg1, arg2)
    arg1[0x11].w &= 0xfff7
    
    if (arg1[9] == 0)
        return result
    
    sub_42c754(arg1, 0)
    sub_42c754(arg1, 0)
    sub_42c754(arg1, 0)
    sub_42c754(arg1, 0)
    return sub_42c754(arg1, 0)
}
