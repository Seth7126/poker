// ============================================================
// 函数名称: sub_45fd34
// 虚拟地址: 0x45fd34
// WARP GUID: cfe8ec1a-d4ef-5b5e-b3be-f3b819fd0841
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45fc98, sub_45f460, sub_45e7b0, sub_45e708, sub_45f780, sub_45eb30, sub_45faf0, sub_45fb84, sub_45fa04, sub_45f2cc
// [被调用的父级函数]: sub_4601e8
// ============================================================

int32_t __convention("regparm")sub_45fd34(int32_t* arg1)
{
    // 第一条实际指令: while (true)
    while (true)
        int32_t ecx
        
        if (*(arg1 + 0x192) == 0)
            if (*(*(arg1 + 0x1aa) + 0x50) != 0)
                int32_t eax_5
                eax_5, ecx = sub_45fb84(arg1)
                
                if (eax_5 == 0)
                    return 0
            else
                int32_t eax_2
                eax_2, ecx = sub_45fc98(arg1)
                
                if (eax_2 == 0)
                    return 0
        
        int32_t edx_1 = *(arg1 + 0x192)
        
        if (edx_1 s>= 0xcd)
            if (edx_1 s> 0xdb)
                if (edx_1 == 0xdc)
                    if (sub_45faf0(arg1, edx_1 - 0xdc, ecx) == 0)
                        return 0
                    
                    goto label_46001b
                
                if (edx_1 == 0xdd)
                    if (sub_45fa04(arg1) == 0)
                        return 0
                    
                    goto label_46001b
                
                if (edx_1 - 0xe0 u< 0x10)
                    if ((*(*(arg1 + 0x1aa) + (*(arg1 + 0x192) << 2) - 0x370))() == 0)
                        return 0
                    
                    goto label_46001b
                
                if (edx_1 != 0xfe)
                    goto label_460003
                
                if ((*(*(arg1 + 0x1aa) + 0xc))() == 0)
                    return 0
                
                goto label_46001b
            
            if (edx_1 == 0xdb)
                if (sub_45f780(arg1) == 0)
                    return 0
                
                goto label_46001b
            
            if (edx_1 - 0xcd u> 0xd)
                goto label_460003
            
            switch (edx_1)
                case 0xcd, 0xce, 0xcf
                    goto label_45fefb
                case 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7
                label_45ffd4:
                    void* eax_47 = *arg1
                    *(eax_47 + 0x14) = 0x5b
                    *(eax_47 + 0x18) = *(arg1 + 0x192)
                    (*(*arg1 + 4))()
                    goto label_46001b
                case 0xd8
                    sub_45e708(arg1)
                    goto label_46001b
                case 0xd9
                    *(*arg1 + 0x14) = 0x54
                    (*(*arg1 + 4))()
                    *(arg1 + 0x192) = 0
                    return 2
                case 0xda
                    break
        else
            if (edx_1 s< 0xc5)
                if (edx_1 s> 0xc2)
                    if (edx_1 == 0xc3)
                        goto label_45fefb
                    
                    if (edx_1 != 0xc4)
                        goto label_460003
                    
                    if (sub_45f460(arg1) == 0)
                        return 0
                    
                    goto label_46001b
                
                if (edx_1 == 0xc2)
                    if (sub_45e7b0(arg1, 1, 0) == 0)
                        return 0
                    
                    goto label_46001b
                
                if (edx_1 == 1)
                    goto label_45ffd4
                
                if (edx_1 - 0xc0 u>= 2)
                    goto label_460003
                
                if (sub_45e7b0(arg1, 0, 0) == 0)
                    return 0
                
                goto label_46001b
            
            if (edx_1 - 0xc5 u> 7)
            label_460003:
                void* eax_52 = *arg1
                *(eax_52 + 0x14) = 0x43
                *(eax_52 + 0x18) = *(arg1 + 0x192)
                (**arg1)()
            label_46001b:
                ecx = 0
                *(arg1 + 0x192) = 0
            else
                switch (edx_1)
                    case 0xc5, 0xc6, 0xc7, 0xc8, 0xcb
                    label_45fefb:
                        void* eax_21 = *arg1
                        *(eax_21 + 0x14) = 0x3b
                        *(eax_21 + 0x18) = *(arg1 + 0x192)
                        (**arg1)()
                        goto label_46001b
                    case 0xc9
                        if (sub_45e7b0(arg1, 0, 1) == 0)
                            return 0
                        
                        goto label_46001b
                    case 0xca
                        if (sub_45e7b0(arg1, 1, 1) == 0)
                            return 0
                        
                        goto label_46001b
                    case 0xcc
                        if (sub_45f2cc(arg1) == 0)
                            return 0
                        
                        goto label_46001b
    
    if (sub_45eb30(arg1) == 0)
        return 0
    
    *(arg1 + 0x192) = 0
    return 1
}
