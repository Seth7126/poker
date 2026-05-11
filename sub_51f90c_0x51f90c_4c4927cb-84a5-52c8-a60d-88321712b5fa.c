// ============================================================
// 函数名称: sub_51f90c
// 虚拟地址: 0x51f90c
// WARP GUID: 4c4927cb-84a5-52c8-a60d-88321712b5fa
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a180, sub_51cc08, sub_47a1c0, sub_4837ec, sub_517b44, sub_4d7e6c, sub_4f2e8c, sub_47a9a0, sub_403010, sub_4c0924
// [被调用的父级函数]: sub_4c96bc
// ============================================================

void* __convention("regparm")sub_51f90c(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    *(*data_5301f4 + 0x2a242) = 0
    *data_53070c = 0
    *(*data_5301f4 + 0x10250) = 0
    *(*data_5301f4 + 0x2a240) = (*(data_530598 + 0x1c)).w
    int32_t ebx_1 = *data_53075c
    int32_t esi_1 = *data_5302e0
    void* edx_1
    
    if (esi_1 s>= ebx_1)
        int32_t i_11 = esi_1 - ebx_1 + 1
        int32_t i
        
        do
            ecx, edx_1 = sub_47a180(ebx_1, *data_530658, *data_530304, 1)
            ebx_1 += 1
            i = i_11
            i_11 -= 1
        while (i != 1)
    
    edx_1.b = 1
    void* ebp = sub_51cc08(ecx, edx_1.b)
    *(arg1 + 0x457c) = 0x3f800000
    
    if (*(data_530598 + 0xc) == 1)
        *(arg1 + 0x457c) = 0x3f4ccccd
    
    *(arg1 + 0x4580) = 0
    
    if (*(*data_5301f4 + 4) != 7)
        int32_t i_12 = *data_5300d0
        
        if (i_12 s> 0)
            int32_t ebx_2 = 1
            int32_t i_1
            
            do
                bool o_1 = unimplemented  {imul eax, ebx, 0x18d}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                sub_517b44(arg1 + ebx_2 * 0x31a + 0x276be)
                bool o_2 = unimplemented  {imul eax, ebx, 0x18d}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_517b44(arg1 + ebx_2 * 0x31a + 0x26108)
                bool o_3 = unimplemented  {imul eax, ebx, 0x18d}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                sub_517b44(arg1 + ebx_2 * 0x31a + 0x28c74)
                ebx_2 += 1
                i_1 = i_12
                i_12 -= 1
            while (i_1 != 1)
    
    *(*data_5301f4 + 0x1026c) = 0
    *(*data_5301f4 + 0x10884) = 0
    void* eax_23 = data_530a74
    *eax_23
    bool o_4 = unimplemented  {imul eax, dword [eax], 0x1038}
    
    if (o_4)
        sub_403010()
        noreturn
    
    int32_t i_13 = sx.d(*(*(*data_530304 + 0xab0) + *eax_23 * 0x81c0 + 0x8130))
    
    if (i_13 s> 0)
        int32_t ebx_3 = 1
        int32_t i_2
        
        do
            void* eax_25 = data_530a74
            *eax_25
            bool o_5 = unimplemented  {imul eax, dword [eax], 0x1038}
            
            if (o_5)
                sub_403010()
                noreturn
            
            char eax_28
            
            if (ebx_3 s>= sx.d(*(*(*data_530304 + 0xab0) + *eax_25 * 0x81c0 + 0x8130)))
                eax_28 = sub_4c0924()
            
            if (ebx_3 s< sx.d(*(*(*data_530304 + 0xab0) + *eax_25 * 0x81c0 + 0x8130)) || eax_28 == 0)
                sub_47a1c0(ebx_3, *data_530a74, *data_530304, 0)
            
            ebx_3 += 1
            i_2 = i_13
            i_13 -= 1
        while (i_2 != 1)
    
    sub_4837ec(*data_530304, *data_530a74, true)
    sub_47a1c0(*data_530a54, *data_530a74, *data_530304, 1)
    *data_5300d0 = *(*data_5301f4 + 0x456c)
    
    if (*(*data_5301f4 + 4) != 7)
        int32_t i_9 = 0x1a
        void* esi_7 = data_530208 + 4
        int32_t i_3
        
        do
            sub_47a1c0(*esi_7, *data_530a74, *data_530304, 1)
            esi_7 += 4
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    else
        int32_t i_4 = 1
        void* esi_5 = data_530208 + 4
        
        do
            sub_47a1c0(*esi_5, *data_530a74, *data_530304, 1)
            
            if (add_overflow(i_4, 8))
                sub_403010()
                noreturn
            
            sub_47a1c0(*(data_530208 + ((i_4 + 8) << 2)), *data_530a74, *data_530304, 0)
            
            if (add_overflow(i_4, 0xe))
                sub_403010()
                noreturn
            
            sub_47a1c0(*(data_530208 + ((i_4 + 0xe) << 2)), *data_530a74, *data_530304, 0)
            i_4 += 1
            esi_5 += 4
        while (i_4 != 9)
    
    int32_t i_14 = *data_5300d0
    
    if (i_14 s> 0)
        void* ebx_5 = data_530678 + 4
        void* edi_1 = data_5301b0
        int32_t i_5
        
        do
            sub_47a1c0(*ebx_5, *data_530a74, *data_530304, 0)
            *(edi_1 + 0x8978) = 0
            edi_1 += 0x8d14
            ebx_5 += 4
            i_5 = i_14
            i_14 -= 1
        while (i_5 != 1)
    
    int32_t i_6 = 1
    void* eax_56 = data_5301b0 + 0x897c
    void* edx_30 = data_5302e4 + 0x897c
    
    do
        *eax_56 = i_6
        *edx_30 = i_6
        i_6 += 1
        edx_30 += 0x8d14
        eax_56 += 0x8d14
    while (i_6 != 0x15)
    
    eax_56.b = 1
    sub_4f2e8c(eax_56.b)
    int32_t i_10 = 0x14
    void* ecx_12 = data_5301b0 + 0x8ccc
    *(ebp - 4) = data_5302e4 + 0x8ccc
    int32_t i_7
    
    do
        *ecx_12 = 0
        **(ebp - 4) = 0
        int32_t j_1 = 0xa6
        void* eax_60 = ecx_12 - 0x8c70
        char* edx_32 = *(ebp - 4) - 0x8c70
        int32_t j
        
        do
            *eax_60 = 0
            *edx_32 = 0
            edx_32 = &edx_32[0xd4]
            eax_60 += 0xd4
            j = j_1
            j_1 -= 1
        while (j != 1)
        *(ebp - 4) += 0x8d14
        ecx_12 += 0x8d14
        i_7 = i_10
        i_10 -= 1
    while (i_7 != 1)
    *data_53070c = 0
    *data_52fee8 = 0
    *(*data_5301f4 + 0x1024c) = 0
    int32_t i_15 = *data_5300d0
    
    if (i_15 s> 0)
        int32_t ebx_6 = 1
        int32_t i_8
        
        do
            if (*(*data_5301f4 + 0x111f8) == 0)
                bool o_9 = unimplemented  {imul eax, ebx, 0x29}
                
                if (o_9)
                    sub_403010()
                    noreturn
                
                sub_47a9a0(*data_530a28, *(data_5301f0 + 0x1c), *data_530304, 
                    *data_5301f4 + ebx_6 * 0xa4 + 0x25bac)
            else
                bool o_8 = unimplemented  {imul eax, ebx, 0x29}
                
                if (o_8)
                    sub_403010()
                    noreturn
                
                sub_47a9a0(*data_530778, *data_52fee4, *data_530304, 
                    *data_5301f4 + ebx_6 * 0xa4 + 0x25bac)
            
            ebx_6 += 1
            i_8 = i_15
            i_15 -= 1
        while (i_8 != 1)
    
    *data_530304
    sub_4d7e6c()
    void* result = *data_5301f4
    *(result + 0xfffc) = 0
    return result
}
