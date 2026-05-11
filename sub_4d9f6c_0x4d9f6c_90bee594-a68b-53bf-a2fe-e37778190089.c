// ============================================================
// 函数名称: sub_4d9f6c
// 虚拟地址: 0x4d9f6c
// WARP GUID: 90bee594-a68b-53bf-a2fe-e37778190089
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_4c1fb8, sub_51cc08, sub_4c2418, sub_4d9eef, sub_4dc3b8
// ============================================================

int32_tsub_4d9f6c()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* var_28 = &__saved_ebp
    int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(data_780c58 + 4)
    
    if (*(data_780c58 + 4) != 7 || *(data_780c58 + 0x2008d) != 0)
        int32_t i_2 = 4
        void* var_10_1 = &data_61d4c8
        void* var_14_1 = &data_61d4f4
        int32_t i
        
        do
            int32_t j_2 = 2
            void* edx_1 = var_10_1
            void* ecx_1 = var_14_1
            int32_t j
            
            do
                *ecx_1 = *edx_1
                ecx_1 += 4
                edx_1 += 4
                j = j_2
                j_2 -= 1
            while (j != 1)
            var_14_1 += 0x80
            var_10_1 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        int32_t i_3 = 4
        void* var_18_1 = &data_61d4c8
        void* var_1c_1 = &data_61d4f4
        int32_t i_1
        
        do
            int32_t j_3 = 2
            void* edx_2 = var_18_1
            void* ecx_2 = var_1c_1
            int32_t j_1
            
            do
                *ecx_2 = *edx_2
                ecx_2 += 4
                edx_2 += 4
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            var_1c_1 += 0x80
            var_18_1 += 8
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
