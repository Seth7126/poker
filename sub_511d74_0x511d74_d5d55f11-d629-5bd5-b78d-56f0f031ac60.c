// ============================================================
// 函数名称: sub_511d74
// 虚拟地址: 0x511d74
// WARP GUID: d5d55f11-d629-5bd5-b78d-56f0f031ac60
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_50918c, sub_512e7c
// [被调用的父级函数]: sub_5168a7
// ============================================================

int32_t __convention("regparm")sub_511d74(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    sub_512e7c(arg3, arg1 + 0x3640)
    int32_t result
    result.b = *(arg1 + 0x1a0)
    result.b ^= 1
    
    if (result.b != 0)
        *(arg1 + 0x1a0) = 1
        *(arg1 + 0x1a4) = arg2
        uint32_t eax_1
        int32_t ecx
        int32_t edx_1
        eax_1, ecx, edx_1 = GetTickCount()
        *(arg1 + 0x1ac) = eax_1
        *(arg1 + 0x1b0) = arg3
        sub_50918c(ecx, edx_1)
    
    return result
}
