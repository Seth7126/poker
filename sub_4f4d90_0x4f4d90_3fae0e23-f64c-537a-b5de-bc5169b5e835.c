// ============================================================
// 函数名称: sub_4f4d90
// 虚拟地址: 0x4f4d90
// WARP GUID: 3fae0e23-f64c-537a-b5de-bc5169b5e835
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

void*sub_4f4d90(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edi = data_530368
    *(arg1 - 0x2c) = fconvert.s(data_4f5324 * fconvert.t(*(arg1 - 0x2c)))
    *(arg1 - 0x28) = fconvert.s(data_4f5330 * fconvert.t(*(arg1 - 0x28)))
    *(arg1 - 0x14) = fconvert.s(fconvert.t(*(arg1 - 0x14)) + fconvert.t(0f))
    *(arg1 - 0x18) = fconvert.s(fconvert.t(*(arg1 - 0x18)) - data_4f5340)
    *(arg1 - 0x30) = *(arg1 - 0x14)
    *(arg1 - 0x34) = *(arg1 - 0x18)
    (*data_5306b4)(0x40400000, 0, 0, 0x3f800000)
    (*data_5301d4)(0xbe4ccccd, 0xbe4ccccd, 0)
    
    if (*(arg1 - 0x35) == 0)
        (*data_52ffd4)(6)
        (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c)) * fconvert.t(0.5f)), 
            fconvert.s(float.t(*(arg1 - 0x40)) * fconvert.t(0.5f)))
        (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f) + fconvert.t(*(arg1 - 0x30))), 
            fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f) + fconvert.t(*(arg1 - 0x34))), 
            *(arg1 - 0x24))
        (*data_5307f8)(0, 0)
        (*edi)(*(arg1 - 0x30), *(arg1 - 0x34), *(arg1 - 0x24))
        (*data_5307f8)(0, fconvert.s(float.t(*(arg1 - 0x40))))
        (*edi)(*(arg1 - 0x30), fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), 
            *(arg1 - 0x24))
        *(arg1 - 0x3c)
        bool o_1 = unimplemented  {imul eax, dword [eax-0x3c], 0x1}
        
        if (o_1)
            sub_403010()
            noreturn
        
        (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c))), fconvert.s(float.t(*(arg1 - 0x40))))
        (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), 
            fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
        *(arg1 - 0x3c)
        bool o_2 = unimplemented  {imul eax, dword [eax-0x3c], 0x1}
        
        if (o_2)
            sub_403010()
            noreturn
        
        (*data_5307f8)(fconvert.s(float.t(*(arg1 - 0x3c))), 0)
        (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), *(arg1 - 0x34), 
            *(arg1 - 0x24))
        (*data_5307f8)(0, 0)
        (*edi)(*(arg1 - 0x30), *(arg1 - 0x34), *(arg1 - 0x24))
        (*data_530a08)()
    else
        (*data_52ffd4)(6)
        (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f) + fconvert.t(*(arg1 - 0x30))), 
            fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f) + fconvert.t(*(arg1 - 0x34))), 
            *(arg1 - 0x24))
        (*edi)(*(arg1 - 0x30), *(arg1 - 0x34), *(arg1 - 0x24))
        (*edi)(*(arg1 - 0x30), fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), 
            *(arg1 - 0x24))
        (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), 
            fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
        (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), *(arg1 - 0x34), 
            *(arg1 - 0x24))
        (*edi)(*(arg1 - 0x30), *(arg1 - 0x34), *(arg1 - 0x24))
        (*data_530a08)()
    
    void* result = arg1
    
    if (*(result - 0x44) s> 0)
        result = arg1
        
        if (*(result - 0x45) == 0)
            if (*(arg1 - 0x35) == 0)
                (*data_53036c)(0xde1, *(arg1 - 0x44))
            
            *(arg1 - 0x4c) = 0x3e4ccccd
            *(arg1 - 0x20) = *(arg1 - 0x28)
            *(arg1 - 0x1c) = *(arg1 - 0x2c)
            
            if (*(arg1 - 0x35) != 0)
                (*data_52ffd4)(7)
                (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(0f)), 
                    fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                    fconvert.s(fneg(fconvert.t(*(arg1 - 0x4c))) + fconvert.t(*(arg1 - 0x24))))
                (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x1c))), 
                    fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                    fconvert.s(fneg(fconvert.t(*(arg1 - 0x4c))) + fconvert.t(*(arg1 - 0x24))))
                (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x1c))), 
                    fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                    fconvert.s(fconvert.t(0f) + fconvert.t(*(arg1 - 0x24))))
                (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(0f)), 
                    fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                    fconvert.s(fconvert.t(0f) + fconvert.t(*(arg1 - 0x24))))
                return (*data_530a08)()
            
            (*data_52ffd4)(7)
            (*data_5307f8)(0, 0)
            (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(0f)), 
                fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                fconvert.s(fneg(fconvert.t(*(arg1 - 0x4c))) + fconvert.t(*(arg1 - 0x24))))
            (*data_5307f8)(fconvert.s(float.t(*(data_530598 + 0x3a0))), 0)
            (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x1c))), 
                fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                fconvert.s(fneg(fconvert.t(*(arg1 - 0x4c))) + fconvert.t(*(arg1 - 0x24))))
            (*data_5307f8)(fconvert.s(float.t(*(data_530598 + 0x3a0))), 0x3f800000)
            (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x1c))), 
                fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                fconvert.s(fconvert.t(0f) + fconvert.t(*(arg1 - 0x24))))
            (*data_5307f8)(0, 0x3f800000)
            (*edi)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(0f)), 
                fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x20))), 
                fconvert.s(fconvert.t(0f) + fconvert.t(*(arg1 - 0x24))))
            return (*data_530a08)()
    
    return result
}
