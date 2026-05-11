// ============================================================
// 函数名称: sub_46c0d4
// 虚拟地址: 0x46c0d4
// WARP GUID: 739f2015-d467-5bdf-99cf-988bce8c37bd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46ba74, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_tsub_46c0d4(void* arg1 @ ebp)
{
    // 第一条实际指令: if (*(*(arg1 - 4) + 0xce9) == 0)
    if (*(*(arg1 - 4) + 0xce9) == 0)
        (*data_530034)(0xde1)
    
    int32_t ebx
    int32_t var_4 = ebx
    (*data_53036c)(0xde1)
    __builtin_memcpy(arg1 - 0x38, *(arg1 - 4) + 0x1088, 0x10)
    (*data_530518)(0x3f800000, 0x3f800000, 0x3f800000, 
        fconvert.s(fconvert.t(*(arg1 - 0x2c)) * fconvert.t(*(arg1 + 0xc))))
    *(arg1 - 0x48) = fconvert.s(fconvert.t(1f) / float.t(*(arg1 + 0x18)) * data_46c3ac)
    *(arg1 - 0x4c) = fconvert.s(fconvert.t(1f) / float.t(*(arg1 + 0x14)) * data_46c3ac)
    int32_t var_c_1 = 0
    int32_t var_10 = 0
    int32_t eax_7 = *(arg1 + 0x14)
    
    if (neg.d(eax_7) == 0x80000000)
        sub_403010()
        noreturn
    
    *(arg1 - 0x50) = neg.d(eax_7)
    (*data_5306a4)(0, 0, 0x3f800000)
    char eax_11
    
    if (*(arg1 + 0x14) s>= 0x64 || *(arg1 + 0x14) == 0x4d)
        if (*(arg1 + 8) == 0)
            eax_11 = 1
        else
            eax_11 = 0
    else if (*(arg1 + 0x14) != 0x35 || *(arg1 + 8) != 0)
        eax_11 = 0
    else
        eax_11 = 1
    
    *(arg1 - 0x25) = eax_11
    
    if (*(arg1 - 0x25) == 0)
        *(arg1 - 0x40) = 0xd
        int32_t eax_16 = *(*(arg1 - 4) + 0xdc0)
        
        if (eax_16 == 3)
            *(arg1 - 0x40) = 9
        else if (eax_16 == 2)
            *(arg1 - 0x40) = 9
        else if (eax_16 == 1)
            *(arg1 - 0x40) = 7
    else
        *(arg1 - 0x40) = 0x11
        int32_t eax_13 = *(*(arg1 - 4) + 0xdc0)
        
        if (eax_13 == 3)
            *(arg1 - 0x40) = 0xd
        else if (eax_13 == 2)
            *(arg1 - 0x40) = 0xb
        else if (eax_13 == 1)
            *(arg1 - 0x40) = 7
    
    if (*(arg1 - 0x25) != 0)
        ebx = 0
    else
        *(arg1 - 0x48) = fconvert.s(fconvert.t(1f) / float.t(*(arg1 + 0x18)) * data_46c3b8)
        *(arg1 - 0x4c) = fconvert.s(fconvert.t(1f) / float.t(*(arg1 + 0x14)) * data_46c3c4)
        ebx.b = 0xfe
        int32_t temp3_1 = *(arg1 - 0x40)
        *(arg1 - 0x40) -= 3
        
        if (add_overflow(temp3_1, 0xfffffffd))
            sub_403010()
            noreturn
        
        if (*(*(arg1 - 4) + 0xdc0) == 1)
            ebx = 0xffffffff
    
    *(arg1 - 0x44) = 1
    
    do
        if (*(arg1 - 0x44) s<= 3 || *(arg1 - 0x25) != 0)
            int32_t eax_20 = *(*(arg1 - 4) + 0xdc0)
            int32_t eax_21 = eax_20 - *(arg1 - 0x44)
            
            if (add_overflow(eax_20, neg.d(*(arg1 - 0x44))))
                sub_403010()
                noreturn
            
            int32_t edx_1 = sx.d(ebx.b)
            
            if (add_overflow(eax_21, edx_1))
                sub_403010()
                noreturn
            
            if (eax_21 + edx_1 s>= 0xffffffff)
                if (*(arg1 - 0x44) != 1)
                    (*data_52ffd4)(5)
                else
                    (*data_52ffd4)(9)
                
                sub_46ba74(1, 0xffffffff, 1, 1, 0f, 0f, arg1)
                sub_46ba74(0xffffffff, 1, 0xffffffff, 1, 0f, 1f, arg1)
                sub_46ba74(0xffffffff, 0xffffffff, 1, 0xffffffff, 1f, 1f, arg1)
                sub_46ba74(1, 1, 0xffffffff, 0xffffffff, 1f, 0f, arg1)
                
                if (*(arg1 - 0x44) s>= 2)
                    sub_46ba74(1, 0xffffffff, 0x64, 1, 0f, 0f, arg1)
                
                (*data_530a08)()
        
        *(arg1 - 0x44) += 1
    while (*(arg1 - 0x44) != 5)
    
    (*data_53006c)(0xde1)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = 0xde1
    __return_addr = sub_46c398
    return 0
}
