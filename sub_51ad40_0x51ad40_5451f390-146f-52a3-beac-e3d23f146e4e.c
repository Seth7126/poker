// ============================================================
// 函数名称: sub_51ad40
// 虚拟地址: 0x51ad40
// WARP GUID: 5451f390-146f-52a3-beac-e3d23f146e4e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_519df0, sub_51ab70, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4f15a4, sub_4cf900, sub_4c4150, sub_519ce0, sub_4da6ec, sub_5047f4, sub_4da6d7, sub_503984, sub_4e649b
// ============================================================

void __convention("regparm")sub_51ad40(void** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ecx
    int32_t var_10 = ecx
    void** ebx = arg1
    
    if (*(ebx + 0x97a) == 0 && ebx[0x25c] s> 0 && *(*data_530304 + 0xcf9) == 0)
        int32_t edi
        
        if (arg2 s< 1 || arg2 s> 5)
            sub_51ab70(&var_4)
            
            switch (arg2)
                case 0xa
                    int32_t var_1c_5 = 0
                    bool o_1 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_1)
                        sub_403010()
                        noreturn
                    
                    int32_t var_c
                    int32_t var_8
                    arg1, ebp_1 =
                        sub_519df0(ebx, "_leg", nullptr, arg2, edi, 0, 0, var_c, ebx[0x25c] * var_8)
                case 0xb
                    int32_t var_1c_6 = 0
                    ebp_1[-1]
                    bool o_2 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_2)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_sel", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0xc
                    int32_t var_1c_7 = 0
                    ebp_1[-1]
                    bool o_3 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_3)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_zieh", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0xd
                    int32_t var_1c_8 = 0
                    ebp_1[-1]
                    bool o_4 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_4)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_sel", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0xe
                    int32_t var_1c_9 = 0
                    ebp_1[-1]
                    bool o_5 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_5)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, 0x51b3c8, nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0xf
                    int32_t var_1c_10 = 0
                    ebp_1[-1]
                    bool o_6 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_6)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_sel", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x10
                    int32_t var_1c_11 = 0
                    ebp_1[-1]
                    bool o_7 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_7)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, 0x51b3c8, nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x11
                    int32_t var_1c_12 = 0
                    ebp_1[-1]
                    bool o_8 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_8)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "applaushigh1", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x12
                    int32_t var_1c_13 = 0
                    ebp_1[-1]
                    bool o_9 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_9)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "applaushigh2", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x14
                    int32_t var_1c_14 = 0
                    ebp_1[-1]
                    bool o_10 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_10)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_cleg", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x15
                    int32_t var_1c_15 = 0
                    ebp_1[-1]
                    bool o_11 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_11)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_zieh", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x19
                    int32_t var_1c_16 = 0
                    ebp_1[-1]
                    bool o_12 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_12)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "applaus0", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x1a
                    int32_t var_1c_17 = 0
                    ebp_1[-1]
                    bool o_13 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_13)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "applaus1", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x1b
                    int32_t var_1c_18 = 0
                    ebp_1[-1]
                    bool o_14 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_14)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "applaus2", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x1e
                    int32_t var_1c_19 = 0
                    ebp_1[-1]
                    bool o_15 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_15)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_eleg", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                case 0x1f
                    int32_t var_1c_20 = 0
                    ebp_1[-1]
                    bool o_16 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_16)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "_zieh", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
            
            if (ebp_1[-3] != 0xffffffff)
                if (arg2 == 0x22)
                    int32_t var_1c_25 = 0
                    ebp_1[-1]
                    bool o_21 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_21)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen0", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                
                if (arg2 == 0x23)
                    int32_t var_1c_26 = 0
                    ebp_1[-1]
                    bool o_22 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_22)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen1", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                
                if (arg2 == 0x24)
                    int32_t var_1c_27 = 0
                    ebp_1[-1]
                    bool o_23 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_23)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen2", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                
                if (arg2 == 0x25)
                    int32_t var_1c_28 = 0
                    ebp_1[-1]
                    bool o_24 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_24)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen3", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
            else
                if (arg2 == 0x22)
                    int32_t var_1c_21 = 0
                    ebp_1[-1]
                    bool o_17 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_17)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen0", nullptr, arg2, edi, 0xf, 1, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                
                if (arg2 == 0x23)
                    int32_t var_1c_22 = 0
                    ebp_1[-1]
                    bool o_18 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_18)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen1", nullptr, arg2, edi, 0xf, 1, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                
                if (arg2 == 0x24)
                    int32_t var_1c_23 = 0
                    ebp_1[-1]
                    bool o_19 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_19)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen2", nullptr, arg2, edi, 0xf, 1, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
                
                if (arg2 == 0x25)
                    int32_t var_1c_24 = 0
                    ebp_1[-1]
                    bool o_20 = unimplemented  {imul dword [ebp-0x4]}
                    
                    if (o_20)
                        sub_403010()
                        noreturn
                    
                    arg1, ebp_1 = sub_519df0(ebx, "raunen3", nullptr, arg2, edi, 0xf, 1, ebp_1[-2], 
                        ebx[0x25c] * ebp_1[-1])
            
            if (arg2 == 0x28)
                int32_t var_1c_29 = 0
                ebp_1[-1]
                bool o_25 = unimplemented  {imul dword [ebp-0x4]}
                
                if (o_25)
                    sub_403010()
                    noreturn
                
                arg1, ebp_1 = sub_519df0(ebx, "mitleid", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                    ebx[0x25c] * ebp_1[-1])
            
            if (arg2 == 0x29)
                int32_t var_1c_30 = 0
                ebp_1[-1]
                bool o_26 = unimplemented  {imul dword [ebp-0x4]}
                
                if (o_26)
                    sub_403010()
                    noreturn
                
                arg1, ebp_1 = sub_519df0(ebx, "lachen1", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                    ebx[0x25c] * ebp_1[-1])
            
            if (arg2 == 0x2a)
                int32_t var_1c_31 = 0
                ebp_1[-1]
                bool o_27 = unimplemented  {imul dword [ebp-0x4]}
                
                if (o_27)
                    sub_403010()
                    noreturn
                
                arg1, ebp_1 = sub_519df0(ebx, "lachen2", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                    ebx[0x25c] * ebp_1[-1])
            
            if (arg2 == 0x2b)
                int32_t var_1c_32 = 0
                ebp_1[-1]
                bool o_28 = unimplemented  {imul dword [ebp-0x4]}
                
                if (o_28)
                    sub_403010()
                    noreturn
                
                arg1, ebp_1 = sub_519df0(ebx, "lachstaun1", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                    ebx[0x25c] * ebp_1[-1])
            
            if (arg2 == 0x2c)
                int32_t var_1c_33 = 0
                ebp_1[-1]
                bool o_29 = unimplemented  {imul dword [ebp-0x4]}
                
                if (o_29)
                    sub_403010()
                    noreturn
                
                arg1, ebp_1 = sub_519df0(ebx, "lachstaun2", nullptr, arg2, edi, 0, 0, ebp_1[-2], 
                    ebx[0x25c] * ebp_1[-1])
        else
            if (arg2 == 1)
                int32_t var_1c_1 = 0
                arg1, ebp_1 = sub_519df0(ebx, 0x51b36c, nullptr, arg2, edi, 0, 0, 0, ebx[0x25c])
            
            if (arg2 == 2)
                int32_t var_1c_2 = 0
                arg1, ebp_1 = sub_519df0(ebx, "down", nullptr, arg2, edi, 0, 0, 0, ebx[0x25c])
            
            if (arg2 == 3)
                int32_t var_1c_3 = 0
                arg1, ebp_1 = sub_519df0(ebx, "over", nullptr, arg2, edi, 0, 0, 0, ebx[0x25c])
    
    *ebp_1
}
