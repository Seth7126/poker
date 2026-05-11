// ============================================================
// 函数名称: sub_48e89c
// 虚拟地址: 0x48e89c
// WARP GUID: ce769519-5e85-5e99-b73c-3d87b025bef0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetTickCount
// [内部子函数调用]: sub_403008
// [被调用的父级函数]: sub_4e6659, sub_52add4, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_48e89c(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: uint32_t eax = GetTickCount()
    uint32_t eax = GetTickCount()
    
    if (eax s< 0)
        sub_403008()
        noreturn
    
    *(arg1 + 0x1234) = eax
    *(arg1 + 0x12dc) = arg2
    int32_t result = arg2
    
    if (result s> 0)
        int32_t edx = 1
        int32_t i
        
        do
            if (edx u> 0x14)
                sub_403008()
                noreturn
            
            (arg1 + 0x1234)[edx + 0x15] = 0
            edx += 1
            i = result
            result -= 1
        while (i != 1)
    
    result.b = arg3:3.b
    return result
}
