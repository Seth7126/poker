// ============================================================
// 函数名称: sub_503538
// 虚拟地址: 0x503538
// WARP GUID: 247d9e3f-1e6b-584b-a456-354d2cfd4f16
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d20, sub_516ec0, sub_517fb4, sub_4f1070, sub_4f1e48, sub_4ee7d8, sub_516e74, sub_503984, sub_403010
// [被调用的父级函数]: sub_4ee958
// ============================================================

int32_t __fastcallsub_503538(int32_t arg1, int32_t arg2, int32_t arg3 @ eax, void* arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ebx
    int32_t var_74 = ebx
    int32_t esi
    int32_t var_78 = esi
    int32_t edi
    int32_t var_7c = edi
    int32_t esi_1 = arg1
    int32_t var_8 = arg2
    int32_t ebx_1 = arg3
    void* edi_1 = arg4
    
    if (edi_1 == 0)
        void* eax_1
        eax_1.b = *(*data_5301f4 + 4)
        char temp1_1 = eax_1.b
        eax_1.b -= 1
        char temp2_1
        
        if (temp1_1 != 1)
            eax_1.b -= 4
            temp2_1 = eax_1.b
            eax_1.b -= 2
        
        if ((temp1_1 == 1 || temp2_1 u< 2) && esi_1 == 0xc && ebx_1 != 1 && sub_4ee7d8() == 0)
            void* eax_5 = *data_5301f4
            *(eax_5 + 0x10020)
            bool o_1 = unimplemented  {imul eax, dword [eax+0x10020], 0x29}
            
            if (o_1)
                sub_403010()
                noreturn
            
            if (*(*data_5301f4 + *(eax_5 + 0x10020) * 0xa4 + 0x25bac) s>= 3)
                bool o_2 = unimplemented  {imul eax, ebx, 0x2345}
                
                if (o_2)
                    sub_403010()
                    noreturn
                
                sub_516e74(data_5301b0 + ebx_1 * 0x8d14 - 0x8d14)
                bool o_3 = unimplemented  {imul eax, ebx, 0x2345}
                
                if (o_3)
                    sub_403010()
                    noreturn
                
                int32_t eax_11 = sub_402d20(*(data_5301b0 + ebx_1 * 0x8d14 - 0x39c))
                
                if (add_overflow(eax_11, 1))
                    sub_403010()
                    noreturn
                
                if (eax_11 + 1 != var_8)
                    bool o_5 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    bool o_6 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    sub_517fb4(data_5301b0 + ebx_1 * 0x8d14 + ((eax_11 + 1) << 2) - 0x368, 
                        data_5301b0 + ebx_1 * 0x8d14 + (var_8 << 2) - 0x368)
                
                bool o_7 = unimplemented  {imul eax, ebx, 0x2345}
                
                if (o_7)
                    sub_403010()
                    noreturn
                
                sub_516ec0(data_5301b0 + ebx_1 * 0x8d14 - 0x8d14)
                var_8 = eax_11 + 1
    
    char eax_22 = 0
    
    if (esi_1 == 0xffffffff)
        esi_1 = 0xc
        eax_22 = 1
    
    if (edi_1 == 0 && esi_1 == 0xc)
        bool o_8 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_8)
            sub_403010()
            noreturn
        
        void* edi_2 = *(data_5301b0 + esi_1 * 0x8d14 - 0x39c)
        edi_1 = edi_2 + 1
        
        if (add_overflow(edi_2, 1))
            sub_403010()
            noreturn
    else if (edi_1 == 0)
        bool o_10 = unimplemented  {imul edx, esi, 0x2345}
        
        if (o_10)
            sub_403010()
            noreturn
        
        void* edi_3 = *(data_5301b0 + esi_1 * 0x8d14 - 0x39c)
        edi_1 = edi_3 + 1
        
        if (add_overflow(edi_3, 1))
            sub_403010()
            noreturn
    
    int32_t var_c = var_8
    
    if (ebx_1 s<= 0)
        ebx_1 = 1
    
    void* edx_12
    edx_12.b = *(*data_5301f4 + 4)
    char temp3 = edx_12.b
    edx_12.b -= 2
    float var_70[0x18]
    
    if (temp3 == 2 && (esi_1 == 0xc || esi_1 == 0x10))
        if (eax_22 == 0)
            sub_4f1070(ebx_1, ebx_1, &var_70)
            bool o_12 = unimplemented  {imul eax, esi, 0x2345}
            
            if (o_12)
                sub_403010()
                noreturn
            
            bool o_13 = unimplemented  {imul edx, edi, 0x35}
            
            if (o_13)
                sub_403010()
                noreturn
            
            __builtin_memcpy(data_5301b0 + esi_1 * 0x8d14 + edi_1 * 0xd4 - 0x8de4, &var_70, 0x58)
        
        bool o_14 = unimplemented  {imul eax, esi, 0x2345}
        
        if (o_14)
            sub_403010()
            noreturn
        
        bool o_15 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_15)
            sub_403010()
            noreturn
        
        *(data_5301b0 + esi_1 * 0x8d14 + edi_1 * 0xd4 - 0x8ddc) = 0xc2c20000
    
    void* eax_29
    eax_29.b = *(*data_5301f4 + 4)
    char temp7 = eax_29.b
    eax_29.b -= 1
    char temp10_1
    
    if (temp7 != 1)
        eax_29.b -= 4
        temp10_1 = eax_29.b
        eax_29.b -= 2
    
    if ((temp7 == 1 || temp10_1 u< 2) && esi_1 == 0xc)
        sub_4f1070(ebx_1, ebx_1, &var_70)
        bool o_16 = unimplemented  {imul eax, esi, 0x2345}
        
        if (o_16)
            sub_403010()
            noreturn
        
        bool o_17 = unimplemented  {imul edx, edi, 0x35}
        
        if (o_17)
            sub_403010()
            noreturn
        
        __builtin_memcpy(data_5301b0 + esi_1 * 0x8d14 + edi_1 * 0xd4 - 0x8de4, &var_70, 0x58)
    
    float var_98
    int32_t ecx_7
    int32_t* ebp_1
    
    if (ebx_1 != 0xb)
        char var_84_4 = 1
        char var_88_1 = 2
        char var_8c_1 = 2
        int32_t var_90_1 = 0
        int32_t var_94_1 = 0
        var_98 = 0f
        ecx_7, ebp_1 = sub_503984(ebx_1, var_8, esi_1, var_98, var_94_1, var_90_1, var_8c_1, var_88_1, 
            var_84_4, edi_1)
    else
        char var_84_3 = 1
        char var_88 = 3
        char var_8c = 2
        int32_t var_90 = 0
        int32_t var_94 = 0
        var_98 = 0f
        ecx_7, ebp_1 =
            sub_503984(ebx_1, var_8, esi_1, var_98, var_94, var_90, var_8c, var_88, var_84_3, edi_1)
    
    int32_t esi_2 = ebx_1 * 0x2345
    bool o_18 = unimplemented  {imul esi, ebx, 0x2345}
    
    if (o_18)
        sub_403010()
        noreturn
    
    int32_t eax_38 = *(data_5301b0 + (esi_2 << 2) - 0x39c)
    
    if (add_overflow(eax_38, 0xffffffff))
        sub_403010()
        noreturn
    
    *(data_5302e4 + (esi_2 << 2) - 0x39c) = eax_38 - 1
    bool o_20 = unimplemented  {imul eax, ebx, 0x2345}
    
    if (o_20)
        sub_403010()
        noreturn
    
    sub_4f1e48(ecx_7, 0, data_5302e4 + (esi_2 << 2) - 0x8d14, 
        fconvert.s(float.t(*(data_5302e4 + ebx_1 * 0x8d14 - 0x39c))))
    float* esp_1 = &var_98
    
    if (ebx_1 s< 0xb)
        int32_t eax_45 = *(data_5301b0 + (esi_2 << 2) - 0x39c)
        
        if (eax_45 s> 0)
            ebp_1[-4] = eax_45
            int32_t esi_3 = 1
            void* edi_7 = data_5301b0 + 0xd4
            ebp_1[-5] = data_5302e4 + 0xd4
            int32_t i
            
            do
                if (esi_3 s< ebp_1[-1])
                    bool o_21 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    bool o_22 = unimplemented  {imul edx, ebx, 0x2345}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-5] + ebx_1 * 0x8d14 - 0x8de8) = *(edi_7 + ebx_1 * 0x8d14 - 0x8de8)
                    *(esp_1 - 4) = esi_3
                    *(esp_1 - 8) = 0
                    *(esp_1 - 0xc) = 2
                    *(esp_1 - 0x10) = 1
                    *(esp_1 - 0x14) = 0
                    *(esp_1 - 0x18) = 0
                    *(esp_1 - 0x1c) = 0
                    esp_1 -= 0x1c
                    
                    if (neg.d(ebx_1) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ebp_1 = sub_503984(ebx_1, esi_3, neg.d(ebx_1))
                else if (esi_3 s> ebp_1[-1])
                    bool o_24 = unimplemented  {imul eax, ebx, 0x2345}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    bool o_25 = unimplemented  {imul edx, ebx, 0x2345}
                    
                    if (o_25)
                        sub_403010()
                        noreturn
                    
                    *(ebp_1[-5] + ebx_1 * 0x8d14 - 0x8ebc) = *(edi_7 + ebx_1 * 0x8d14 - 0x8de8)
                    
                    if (add_overflow(esi_3, 0xffffffff))
                        sub_403010()
                        noreturn
                    
                    *(esp_1 - 4) = esi_3 - 1
                    *(esp_1 - 8) = 0
                    *(esp_1 - 0xc) = 2
                    *(esp_1 - 0x10) = 1
                    *(esp_1 - 0x14) = 0
                    *(esp_1 - 0x18) = 0
                    *(esp_1 - 0x1c) = 0
                    esp_1 -= 0x1c
                    
                    if (neg.d(ebx_1) == 0x80000000)
                        sub_403010()
                        noreturn
                    
                    ebp_1 = sub_503984(ebx_1, esi_3, neg.d(ebx_1))
                
                esi_3 += 1
                ebp_1[-5] += 0xd4
                edi_7 += 0xd4
                i = ebp_1[-4]
                ebp_1[-4] -= 1
            while (i != 1)
    
    *esp_1
    esp_1[1]
    esp_1[2]
    *ebp_1
    return ebp_1[-2]
}
