// ============================================================
// 函数名称: sub_48b5c0
// 虚拟地址: 0x48b5c0
// WARP GUID: 44c84336-3036-51c5-b1df-41db67a9798a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47c0f0, sub_403010
// [被调用的父级函数]: sub_48bae4
// ============================================================

int32_t __stdcallsub_48b5c0(int32_t arg1 @ eax, int32_t arg2, char arg3, char arg4, int32_t arg5, int32_t arg6, int32_t arg7, void* arg8)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    (*data_530810)()
    (*data_5306a4)(0x851eb852, 0xbfe451eb, 0xb4395810, 0x3fde76c8, 0, 0xbff80000)
    
    if (*(arg8 + 0x14) == 0)
        sub_47c0f0(*(arg8 - 4))
    
    int32_t var_60 = 0
    int32_t var_64 = 0
    
    if (neg.d(arg7) == 0x80000000)
        sub_403010()
        noreturn
    
    int32_t var_50 = neg.d(arg7)
    (*data_5306a4)(0x851eb852)
    (*data_5306a4)(0, 0, 0, 0, 0x47ae147b, 0xbf747ae1)
    
    if (neg.d(arg5) == 0x80000000)
        sub_403010()
        noreturn
    
    if (neg.d(arg5) == 0x80000000)
        sub_403010()
        noreturn
    
    *(arg8 - 8) = 0x3f800000
    (*data_52ffd4)(7)
    
    for (int32_t i = 1; i != 5; i += 1)
        *(arg8 - 0xc) = 0
        
        if (i == 1)
            if (arg4 != 0)
                *(arg8 - 0xc) = 0x3f800000
            
            *(arg8 - 0x10) = fconvert.s(float.t(arg1) / fconvert.t(639f) + fconvert.t(0f))
            *(arg8 - 0x14) = 0
        else if (i == 2)
            if (arg4 == 0)
                *(arg8 - 0xc) = 0x3f800000
            
            if (arg4 != 0)
                *(arg8 - 0xc) = 0x3f800000
            
            *(arg8 - 0x10) = 0
            *(arg8 - 0x14) = fconvert.s(float.t(neg.d(arg5)) / fconvert.t(639f))
        else if (i == 3)
            if (arg4 == 0)
                *(arg8 - 0xc) = 0x3f800000
            
            *(arg8 - 0x10) = fconvert.s(float.t(arg6) / fconvert.t(639f))
            *(arg8 - 0x14) = fconvert.s(float.t(neg.d(arg5)) / fconvert.t(639f))
        else if (i == 4)
            *(arg8 - 0x10) = fconvert.s(float.t(arg1) / fconvert.t(639f)
                + fconvert.t(fconvert.s(float.t(arg6) / fconvert.t(639f))))
            *(arg8 - 0x14) = 0
        
        *(arg8 - 0x1c) = fconvert.s(fconvert.t(1f) - ((fconvert.t(*(arg8 - 0x14)) * fconvert.t(639f)
            - float.t(arg7) + float.t(*(arg8 - 0x18))) / float.t(*(arg8 + 0x20)) + fconvert.t(1f)))
        
        if (arg3 != 0)
            *(arg8 - 0xc) = fconvert.s(fconvert.t(1f) - fconvert.t(*(arg8 - 0xc)))
        
        *(arg8 - 8) = fconvert.s(data_48bab0 * fconvert.t(*(arg8 - 0xc)) + data_48babc)
        *(arg8 - 0x20) = fconvert.s((fconvert.t(1f) - fconvert.t(*(arg8 - 0x1c)))
            * (fconvert.t(1f) - fconvert.t(*(arg8 - 0xc))) * fconvert.t(2f))
        
        if (*(arg8 + 0x24) s<= *(arg8 + 0x20))
            long double x87_r7_39 =
                fconvert.t(*(arg8 - 0x14)) * fconvert.t(639f) / float.t(*(arg8 + 0x20)) / fconvert.t(2f)
                + fconvert.t(*(arg8 - 0x1c)) + fconvert.t(*(arg8 - 0x10)) * fconvert.t(639f)
                / float.t(*(arg8 + 0x24)) / fconvert.t(2f)
            *(arg8 - 0x1c) = fconvert.s(x87_r7_39)
        else
            *(arg8 - 0x1c) = fconvert.s(
                fconvert.t(*(arg8 - 0x10)) * fconvert.t(639f) / float.t(*(arg8 + 0x24))
                + fconvert.t(*(arg8 - 0x1c)))
        
        *(arg8 - 0x24) = fconvert.s((fconvert.t(*(arg8 - 0x20)) + fconvert.t(*(arg8 - 0x1c)))
            * fconvert.t(*(*(arg8 - 4) + 0x1088)))
        *(arg8 - 0x28) = fconvert.s((fconvert.t(*(arg8 - 0x20)) + fconvert.t(*(arg8 - 0x1c)))
            * fconvert.t(*(*(arg8 - 4) + 0x108c)))
        *(arg8 - 0x2c) = fconvert.s((fconvert.t(*(arg8 - 0x20)) + fconvert.t(*(arg8 - 0x1c)))
            * (data_48bacc + fconvert.t(*(*(arg8 - 4) + 0x1090))))
        (*data_530518)(*(arg8 - 0x24), *(arg8 - 0x28), *(arg8 - 0x2c), 
            fconvert.s(fconvert.t(*(arg8 - 8)) * fconvert.t(*(arg8 + 8))))
        
        if (i != arg2)
            if (arg4 == 0)
                if (arg3 == 0)
                    if (i == 2 || i == 4)
                        *(arg8 - 0x10) = fconvert.s(fconvert.t(*(arg8 - 0x10)) - data_48bad8)
                else if (i == 2 || i == 4)
                    *(arg8 - 0x10) = fconvert.s(data_48bad8 + fconvert.t(*(arg8 - 0x10)))
            else if (arg3 == 0)
                if (i == 2 || i == 4)
                    *(arg8 - 0x14) = fconvert.s(fconvert.t(*(arg8 - 0x14)) - data_48bad8)
            else if (i == 1 || i == 3)
                *(arg8 - 0x14) = fconvert.s(fconvert.t(*(arg8 - 0x14)) - data_48bad8)
        else if (arg4 == 0)
            if (arg3 == 0)
                if (i == 2 || i == 4)
                    *(arg8 - 0x10) = fconvert.s(data_48bad8 + fconvert.t(*(arg8 - 0x10)))
            else if (i == 2 || i == 4)
                *(arg8 - 0x10) = fconvert.s(fconvert.t(*(arg8 - 0x10)) - data_48bad8)
        else if (arg3 == 0)
            if (i == 2 || i == 4)
                *(arg8 - 0x14) = fconvert.s(data_48bad8 + fconvert.t(*(arg8 - 0x14)))
        else if (i == 1 || i == 3)
            *(arg8 - 0x14) = fconvert.s(data_48bad8 + fconvert.t(*(arg8 - 0x14)))
        
        (*data_530368)(*(arg8 - 0x10), *(arg8 - 0x14), 0)
    
    return (*data_530a08)()
}
