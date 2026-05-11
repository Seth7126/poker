// ============================================================
// 函数名称: sub_4043ac
// 虚拟地址: 0x4043ac
// WARP GUID: f6713a82-42d1-5f36-9a48-5da82a64ef41
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ebc, sub_403df8, sub_402980, sub_402784
// [被调用的父级函数]: sub_4042c0, sub_4b59d2, sub_4b44d0, sub_49db84, sub_446dd8, sub_404308, sub_4a5d10, sub_4a79a0, sub_404080, sub_409af4, sub_408bec, sub_434264, sub_412e8c, sub_467208, sub_49ffc4, sub_40c0c4, sub_412dfc, sub_49db7b, sub_4af608, sub_4088f0, sub_446b40, sub_49bd14, sub_4ad140, sub_4118f4, sub_4b5a34, sub_40892c
// ============================================================

void* __convention("regparm")sub_4043ac(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: char* edi = nullptr
    char* edi = nullptr
    void* result
    
    if (arg2 == 0)
    label_404401:
        result = arg1
        sub_403df8(result)
        *arg1 = edi
    else
        void* eax = *arg1
        
        if (eax == 0 || *(eax - 8) != 1)
            edi = sub_403ebc(arg2)
            void* eax_6 = *arg1
            
            if (eax_6 != 0)
                int32_t ecx_1 = *(eax_6 - 4)
                
                if (ecx_1 s>= arg2)
                    ecx_1 = arg2
                
                sub_402980(eax_6, edi, ecx_1)
            
            goto label_404401
        
        void* var_10 = eax - 8
        sub_402784(&var_10, arg2 + 9)
        result = var_10 + 8
        *arg1 = result
        *(result - 4) = arg2
        *(result + arg2) = 0
    
    return result
}
