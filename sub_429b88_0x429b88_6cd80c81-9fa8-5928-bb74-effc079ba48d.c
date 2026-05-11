// ============================================================
// 函数名称: sub_429b88
// 虚拟地址: 0x429b88
// WARP GUID: 6cd80c81-9fa8-5928-bb74-effc079ba48d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, GetCursor, GetDesktopWindow
// [内部子函数调用]: sub_4298b4, sub_403248, sub_428e7c, sub_4030a0, sub_43304c
// [被调用的父级函数]: sub_429cf8
// ============================================================

int32_t __convention("regparm")sub_429b88(int32_t* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: data_531764 = arg1
    data_531764 = arg1
    *(data_531764 + 4) = 0
    GetCursorPos(&data_531770)
    void* eax_1 = data_531764
    *(eax_1 + 0xc) = data_531770
    *(eax_1 + 0x10) = data_531774
    data_531778 = GetCursor()
    data_53176c = sub_428e7c((data_531764).w)
    data_53177c = arg3
    int32_t var_14
    int32_t var_10
    
    if (sub_403248(arg1, 0x426f44) != 0)
        int32_t ecx = arg1[0x11]
        
        if (arg1[0x13] - ecx s<= 0)
            arg1[8] = 0
            arg1[9] = 0
        else
            var_14 = arg1[3] - ecx
            var_10 = arg1[0x13] - arg1[0x11]
            *(arg1 + 0x20) = fconvert.d(float.t(var_14) / float.t(var_10))
        
        int32_t edx_3 = arg1[0x12]
        
        if (arg1[0x14] - edx_3 s<= 0)
            arg1[0xa] = 0
            arg1[0xb] = 0
        else
            var_14 = arg1[4] - edx_3
            var_10 = arg1[0x14] - arg1[0x12]
            *(arg1 + 0x28) = fconvert.d(float.t(var_14) / float.t(var_10))
        
        if (arg2 == 0)
            data_531780 = 0
        else
            data_531780 = 2
            (*(*arg1 + 0x2c))(var_14, var_10)
    else if (arg2 == 0)
        data_531780 = 0
    else
        data_531780 = 1
    
    int32_t eax_10
    int32_t ecx_6
    int32_t edx_8
    eax_10, edx_8, ecx_6 = (*(*data_531764 + 8))(var_14, var_10)
    data_531784 = eax_10
    
    if (data_531784 != 0)
        int32_t var_18_1 = data_531774
        HWND eax_12 = GetDesktopWindow()
        ecx_6 = data_531770
        sub_43304c(data_531784, eax_12)
    
    edx_8.b = 1
    int32_t result = sub_4030a0(ecx_6, edx_8)
    data_53178c = result
    
    if (data_531780 == 0)
        return result
    
    return sub_4298b4(&data_531770)
}
