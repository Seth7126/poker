// ============================================================
// 函数名称: sub_42cc28
// 虚拟地址: 0x42cc28
// WARP GUID: 0f566cee-dbd4-5cf9-b2fc-eaf60e522fc7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c5b4, sub_42c620
// [被调用的父级函数]: sub_42fcd0, sub_42ae24
// ============================================================

int32_t __convention("regparm")sub_42cc28(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t var_20 = *arg2
    int32_t var_1c = *arg3
    
    if (sub_42c620(arg1, &var_20, &var_1c) != 0)
        int32_t var_18 = var_20
        int32_t var_14 = var_1c
        
        if (arg1[0x13].b == 0)
            result.b = 1
        else if (sub_42c5b4(arg1, &var_18, &var_14) == 0 || var_18 != var_20 || var_14 != var_1c)
            if (sub_42c620(arg1, &var_18, &var_14) != 0)
                result.b = 1
            else
                result = 0
        else
            result.b = 1
        
        if (result.b != 0)
            *arg2 = var_18
            *arg3 = var_14
    
    return result
}
