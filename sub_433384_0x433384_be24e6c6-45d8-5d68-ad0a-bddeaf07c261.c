// ============================================================
// 函数名称: sub_433384
// 虚拟地址: 0x433384
// WARP GUID: be24e6c6-45d8-5d68-ad0a-bddeaf07c261
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_433414, sub_40b4b0
// [被调用的父级函数]: sub_433480, sub_433528
// ============================================================

int32_t __convention("regparm")sub_433384(void* arg1)
{
    // 第一条实际指令: void* edx
    void* edx
    
    if (arg1 != *(*(arg1 + 0x1c) + 0x64))
        edx = *(arg1 + 0x14)
    else
        edx = arg1
    
    char ecx = *(edx + 0x10)
    
    if (ecx == 1)
        return sub_433414(arg1, 1)
    
    if (ecx == 2)
        return sub_433414(arg1, 2)
    
    edx.b = 1
    sub_40b4b0(0x407d24, edx, nullptr)
    sub_403828()
    noreturn
}
