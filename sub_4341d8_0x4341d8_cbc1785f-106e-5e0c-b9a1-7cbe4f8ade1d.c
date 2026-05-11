// ============================================================
// 函数名称: sub_4341d8
// 虚拟地址: 0x4341d8
// WARP GUID: cbc1785f-106e-5e0c-b9a1-7cbe4f8ade1d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_433f3c, sub_434144, sub_433a30, sub_433370
// [被调用的父级函数]: sub_433b24, sub_43550c, sub_43540c
// ============================================================

int32_t __convention("regparm")sub_4341d8(void* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_14 = 0
    int32_t var_14 = 0
    *arg3 = 0
    int32_t __saved_ebp
    int32_t* var_20 = &__saved_ebp
    int32_t* eax_2 = sub_434144(arg2, arg2)
    
    if (eax_2 == 0 || *(arg1 + 0x14) != eax_2[0x24])
        void* esi_1 = *(arg1 + 0x64)
        
        if (*(esi_1 + 8) != 0)
            int32_t eax_9
            void* edx_1
            eax_9, edx_1 = sub_433370(esi_1)
            
            if (eax_9 s>= 1 && eax_2 == 0)
                int32_t* var_20_1 = &__saved_ebp
                sub_433f3c(*(*(arg1 + 0x64) + 8), edx_1)
    else
        sub_433a30(arg1, eax_2)
        int32_t var_14_1 = 0
    
    return 0
}
