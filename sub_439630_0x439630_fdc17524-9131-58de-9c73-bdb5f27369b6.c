// ============================================================
// 函数名称: sub_439630
// 虚拟地址: 0x439630
// WARP GUID: fdc17524-9131-58de-9c73-bdb5f27369b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4395d0, sub_43b974, sub_43b964
// [被调用的父级函数]: sub_43ccd8, sub_43cc28, sub_43cc00, sub_439e08, sub_43c258, sub_43c230
// ============================================================

int32_t* __convention("regparm")sub_439630(int32_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t j = 0
    int32_t j = 0
    int32_t* result = nullptr
    int32_t j_1 = 0
    int32_t* result_1 = nullptr
    int32_t* result_2 = nullptr
    
    if (arg2 != 0)
        result = sub_43b964(arg2)
        result_1 = result
    
    if (arg3 != 0)
        result = sub_43b964(arg3)
        result_2 = result
    
    char i = 0
    
    while (i == 0)
        if (result_1 s<= j && result_2 s<= j_1)
            break
        
        char var_5_1 = 0xff
        char var_19_1 = 0xff
        
        if (result_1 s> j)
            result.b = *(sub_43b974(arg2, j) + 0x33)
            var_5_1 = result.b
        
        if (result_2 s> j_1)
            result.b = *(sub_43b974(arg3, j_1) + 0x33)
            var_19_1 = result.b
        
        result.b = var_5_1
        int32_t __saved_ebp
        
        if (result.b u> var_19_1)
            result.b = var_19_1
            var_5_1 = result.b
            result = sub_4395d0(&j_1, arg3, arg1, &__saved_ebp)
            i = result.b
        else
            result = sub_4395d0(&j, arg2, arg1, &__saved_ebp)
            i = result.b
        
        for (; result_1 s> j; j += 1)
            result.b = *(sub_43b974(arg2, j) + 0x33)
            
            if (result.b u> var_5_1)
                break
        
        for (; result_2 s> j_1; j_1 += 1)
            result.b = *(sub_43b974(arg3, j_1) + 0x33)
            
            if (result.b u> var_5_1)
                break
    
    return result
}
