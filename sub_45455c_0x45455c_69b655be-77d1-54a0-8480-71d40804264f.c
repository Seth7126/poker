// ============================================================
// 函数名称: sub_45455c
// 虚拟地址: 0x45455c
// WARP GUID: 69b655be-77d1-54a0-8480-71d40804264f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_41d040, sub_41d044
// [被调用的父级函数]: sub_453acc, sub_4535a8, sub_453660, sub_4545b0
// ============================================================

void* __convention("regparm")sub_45455c(void* arg1)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x20)
    int32_t* eax = *(arg1 + 0x20)
    int32_t ecx
    int32_t edx
    
    if (eax != 0)
        ecx, edx = sub_41d044(eax)
    
    edx.b = 1
    void* result = sub_4030a0(ecx, edx)
    *(arg1 + 0x20) = result
    sub_41d040(result)
    return result
}
