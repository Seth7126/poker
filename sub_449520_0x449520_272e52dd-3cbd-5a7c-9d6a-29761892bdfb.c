// ============================================================
// 函数名称: sub_449520
// 虚拟地址: 0x449520
// WARP GUID: 272e52dd-3cbd-5a7c-9d6a-29761892bdfb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowRect, MessageBoxA, GetActiveWindow, SetWindowPos, SetActiveWindow
// [内部子函数调用]: sub_440958, sub_448560, sub_440a0c
// [被调用的父级函数]: sub_5197fb, sub_519804, sub_449678
// ============================================================

HWND __convention("regparm")sub_449520(int32_t arg1, PSTR arg2, PSTR arg3, enum MESSAGEBOX_STYLE arg4)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_5 = ebp
    int32_t ebx
    int32_t var_58 = ebx
    int32_t esi
    int32_t var_5c = esi
    int32_t edi
    int32_t var_60 = edi
    int32_t ExceptionList = arg1
    enum MESSAGEBOX_STYLE uType = arg4
    int32_t eax_4 = (*data_530440)(GetActiveWindow(), 2)
    __return_addr = 2
    
    if (eax_4 != (*data_530440)(*(ExceptionList + 0x24)))
        int32_t var_44 = 0x28
        (*data_530268)(eax_4)
        RECT rect
        GetWindowRect(*(ExceptionList + 0x24), &rect)
        int32_t cy = 0
        ExceptionList = 0
        int32_t var_3c
        int32_t var_34
        int32_t ecx_1 = var_34 - var_3c
        int32_t ecx_2 = ecx_1 s>> 1
        bool c_1 = unimplemented  {sar ecx, 0x1}
        
        if (ecx_1 s>> 1 s< 0)
            ecx_2 = adc.d(ecx_2, 0, c_1)
        
        int32_t var_40
        int32_t var_38
        int32_t edx_2 = var_38 - var_40
        int32_t edx_3 = edx_2 s>> 1
        bool c_2 = unimplemented  {sar edx, 0x1}
        
        if (edx_2 s>> 1 s< 0)
            edx_3 = adc.d(edx_3, 0, c_2)
        
        SetWindowPos(*(ExceptionList + 0x24), nullptr, edx_3 + var_40, ecx_2 + var_3c, ExceptionList, 
            cy, 0x1d)
    
    int32_t eax_19
    void* __return_addr_1
    eax_19, __return_addr_1 = sub_440958(0)
    *(__return_addr_1 - 0x10) = eax_19
    
    if (sub_448560(*(__return_addr_1 - 4)) != 0)
        uType |= MB_RTLREADING
    
    __return_addr = __return_addr_1
    int32_t (* var_4_3)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(__return_addr_1 - 8) = MessageBoxA(*(*(__return_addr_1 - 4) + 0x24), arg2, arg3, uType)
    fsbase->NtTib.ExceptionList = ExceptionList
    
    if (*(__return_addr_1 - 0x14) != *(__return_addr_1 - 0x18))
        enum SET_WINDOW_POS_FLAGS uFlags = 0x1d
        ExceptionList = 0
        int32_t edx_6 = *(__return_addr_1 - 0x4c)
        int32_t ecx_6 = *(__return_addr_1 - 0x44) - edx_6
        int32_t ecx_7 = ecx_6 s>> 1
        bool c_3 = unimplemented  {sar ecx, 0x1}
        
        if (ecx_6 s>> 1 s< 0)
            ecx_7 = adc.d(ecx_7, 0, c_3)
        
        int32_t eax_26 = *(__return_addr_1 - 0x50)
        int32_t edx_8 = *(__return_addr_1 - 0x48) - eax_26
        int32_t edx_9 = edx_8 s>> 1
        bool c_4 = unimplemented  {sar edx, 0x1}
        
        if (edx_8 s>> 1 s< 0)
            edx_9 = adc.d(edx_9, 0, c_4)
        
        SetWindowPos(*(*(__return_addr_1 - 4) + 0x24), nullptr, edx_9 + eax_26, ecx_7 + edx_6, 0, 
            ExceptionList, uFlags)
    
    sub_440a0c(*(__return_addr_1 - 0x10))
    return SetActiveWindow(*(__return_addr_1 - 0xc))
}
