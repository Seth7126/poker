// ============================================================
// 函数名称: sub_430aa4
// 虚拟地址: 0x430aa4
// WARP GUID: 07da89a7-50a0-5216-87cf-b76feb413e36
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCapture, IsIconic
// [内部子函数调用]: sub_42c754, sub_440ee0, sub_4309f4
// [被调用的父级函数]: sub_4455e4
// ============================================================

int32_t __convention("regparm")sub_430aa4(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* var_8_1 = arg2
    char result
    
    if ((*(var_8_1 + 4) & 0xfff0) == 0xf100 && *(var_8_1 + 8) != 0x20 && *(var_8_1 + 8) != 0x2d)
        BOOL eax_6
        eax_6, arg2 = IsIconic(arg1[0x53])
        
        if (eax_6 == 0)
            HWND eax_7
            eax_7, arg2 = GetCapture()
            
            if (eax_7 == 0 && arg1 != *(*data_530660 + 0x38))
                int32_t* eax_11
                eax_11, arg2 = sub_440ee0(arg1)
                
                if (eax_11 != 0)
                    result, arg2 = sub_42c754(eax_11, var_8_1)
    
    if ((*(var_8_1 + 4) & 0xfff0) == 0xf100)
        int32_t __saved_ebp
        int32_t* var_14_3 = &__saved_ebp
        result = sub_4309f4(arg1, arg2)
        
        if (result != 0)
            return result
    
    return (*(*arg1 - 0x10))()
}
