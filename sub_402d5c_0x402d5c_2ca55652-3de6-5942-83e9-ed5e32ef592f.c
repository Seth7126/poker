// ============================================================
// 函数名称: sub_402d5c
// 虚拟地址: 0x402d5c
// WARP GUID: 2ca55652-3de6-5942-83e9-ed5e32ef592f
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_408ebc, sub_49e0cc, sub_408e80
// ============================================================

void __convention("regparm")sub_402d5c(char* arg1, void** arg2)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    char* var_10 = arg1
    void* esi_1
    
    if (arg1 == 0)
    label_402dd9:
    labelid_3:
        esi_1 = &esi[1] - var_10
    else
        arg1 = nullptr
        int32_t ebx_1
        
        do
            ebx_1.b = *esi
            esi = &esi[1]
        while (ebx_1.b == 0x20)
        
        int16_t ecx
        ecx:1.b = 0
        
        if (ebx_1.b == 0x2d)
            ecx:1.b = 1
        label_402de9:
            ebx_1.b = *esi
            esi = &esi[1]
        label_402daa:
            
            if (ebx_1.b != 0)
            label_402dc6:
                
                do
                    ebx_1.b -= 0x30
                    
                    if (ebx_1.b u> 9)
                        goto label_402de3_2
                    
                    if (arg1 u> 0xccccccc)
                        goto label_402de3_2
                    
                    arg1 = arg1 * 0xa + ebx_1
                    ebx_1.b = *esi
                    esi = &esi[1]
                while (ebx_1.b != 0)
                
                goto label_402dc8
            
        label_402de3:
            esi_1 = esi - var_10
        else
            if (ebx_1.b == 0x2b)
                goto label_402de9
            
            if (ebx_1.b == 0x24 || ebx_1.b == 0x78 || ebx_1.b == 0x58)
            label_402df3:
                ebx_1.b = *esi
                esi = &esi[1]
                
                if (ebx_1.b == 0)
                    goto label_402dd9
                
                do
                    if (ebx_1.b u>= 0x61)
                        ebx_1.b -= 0x20
                    
                    ebx_1.b -= 0x30
                    
                    if (ebx_1.b u> 9)
                        ebx_1.b -= 0x11
                        
                        if (ebx_1.b u> 5)
                            goto label_402de3_2
                        
                        ebx_1.b += 0xa
                    
                    if (arg1 u> 0xfffffff)
                        goto label_402de3_2
                    
                    arg1 = (arg1 << 4) + ebx_1
                    ebx_1.b = *esi
                    esi = &esi[1]
                while (ebx_1.b != 0)
                
                esi_1 = nullptr
            else
                if (ebx_1.b != 0x30)
                    goto label_402daa
                
                ebx_1.b = *esi
                esi = &esi[1]
                
                if (ebx_1.b == 0x78 || ebx_1.b == 0x58)
                    goto label_402df3
                
                if (ebx_1.b != 0)
                    goto label_402dc6
                
            label_402dc8:
                char temp0_1 = ecx:1.b
                ecx:1.b -= 1
                
                if (temp0_1 == 1)
                    bool s_1 = neg.d(arg1) s< 0
                    
                    if (neg.d(arg1) == 0 || s_1 != neg.d(arg1) == 0x80000000 || s_1)
                        esi_1 = nullptr
                    else
                    label_402de3_1:
                        esi_1 = esi - var_10
                else if (arg1 s< 0)
                label_402de3_2:
                    esi_1 = esi - var_10
                else
                    esi_1 = nullptr
    
    *arg2 = esi_1
}
