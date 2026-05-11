// ============================================================
// 函数名称: sub_48e8e8
// 虚拟地址: 0x48e8e8
// WARP GUID: 1e3b294f-fa3b-5b3c-8587-33f3cd4d250f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008, sub_40401c
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_48e8e8(int32_t arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = *arg3
    char var_105[0x100]
    __builtin_memcpy(&var_105, arg3, ecx + 1)
    uint32_t eax
    int32_t ecx_2
    eax, ecx_2 = GetTickCount()
    
    if (eax s< 0)
        sub_403008()
        noreturn
    
    if (arg2 u> 0x14)
        sub_403008()
        noreturn
    
    *(arg1 + 0x1234 + (arg2 << 2)) = eax
    
    if (arg2 u> 0x14)
        sub_403008()
        noreturn
    
    sub_40401c(ecx_2, &var_105)
    char var_5
    int32_t result
    result.b = var_5
    return result
}
