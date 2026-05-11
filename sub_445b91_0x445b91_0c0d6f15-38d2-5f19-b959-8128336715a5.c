// ============================================================
// 函数名称: sub_445b91
// 虚拟地址: 0x445b91
// WARP GUID: 0c0d6f15-38d2-5f19-b959-8128336715a5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: ShowWindow, CallWindowProcA, SendMessageA
// [内部子函数调用]: sub_449490, sub_4471a4, sub_403248, sub_444090, sub_42b9bc, sub_4471d4, sub_447198, sub_4318d0, sub_42b220, sub_42b1dc, sub_4471c8, sub_403898
// [被调用的父级函数]: 无
// ============================================================

void*sub_445b91(void* arg1 @ ebp)
{
    // 第一条实际指令: *(arg1 - 4)
    *(arg1 - 4)
    sub_449490(data_5317d8)
    sub_403898(__return_addr)
    int32_t* esp
    int32_t var_8
    
    if (*(*(arg1 - 4) + 0x218) == 4 || (*(*(arg1 - 4) + 0x218) == 6 && *(*(arg1 - 4) + 0x217) == 1))
        if (*(*(arg1 - 4) + 0x217) != 1)
            data_5317dc
            sub_4471a4() - *(*(arg1 - 4) + 0x38)
            unimplemented  {sar ebx, 0x1}
            data_5317dc
            sub_447198() - *(*(arg1 - 4) + 0x3c)
            unimplemented  {sar esi, 0x1}
        else
            sub_42b1dc(*(data_5317d8 + 0x38)) - *(*(arg1 - 4) + 0x38)
            unimplemented  {sar ebx, 0x1}
            sub_42b220(*(data_5317d8 + 0x38)) - *(*(arg1 - 4) + 0x3c)
            unimplemented  {sar esi, 0x1}
        
        int32_t eax_20 = *(*(arg1 - 4) + 0x38)
        var_8 = *(*(arg1 - 4) + 0x3c)
        esp = &var_8
        (*(**(arg1 - 4) + 0x7c))(var_8, eax_20)
        
        if (*(*(arg1 - 4) + 0x47) != 0)
            sub_444090(*(arg1 - 4))
    else
        void* eax_26
        eax_26.b = *(*(arg1 - 4) + 0x218)
        
        if (eax_26.b - 6 u< 2)
            void* esi_6 = *(data_5317d8 + 0x38)
            
            if (*(*(arg1 - 4) + 0x218) == 7 && sub_403248(*(*(arg1 - 4) + 4), &data_43f580) != 0)
                esi_6 = *(*(arg1 - 4) + 4)
            
            if (esi_6 == 0)
                data_5317dc
                sub_4471a4() - *(*(arg1 - 4) + 0x38)
                unimplemented  {sar ebx, 0x1}
                data_5317dc
                sub_447198() - *(*(arg1 - 4) + 0x3c)
                unimplemented  {sar esi, 0x1}
            else
                unimplemented  {sar ebx, 0x1}
                *(esi_6 + 0x38) - *(*(arg1 - 4) + 0x38)
                *(esi_6 + 0x30)
                unimplemented  {sar eax, 0x1}
                *(esi_6 + 0x3c) - *(*(arg1 - 4) + 0x3c)
                *(esi_6 + 0x34)
            
            int32_t eax_45 = *(*(arg1 - 4) + 0x38)
            var_8 = *(*(arg1 - 4) + 0x3c)
            esp = &var_8
            (*(**(arg1 - 4) + 0x7c))(var_8, eax_45)
            
            if (*(*(arg1 - 4) + 0x47) != 0)
                sub_444090(*(arg1 - 4))
        else if (eax_26.b == 5)
            if (*(*(arg1 - 4) + 0x217) != 1)
                data_5317dc
                sub_4471d4() - *(*(arg1 - 4) + 0x38)
                unimplemented  {sar ebx, 0x1}
                data_5317dc
                sub_4471c8() - *(*(arg1 - 4) + 0x3c)
                unimplemented  {sar esi, 0x1}
            else
                sub_42b1dc(*(data_5317d8 + 0x38)) - *(*(arg1 - 4) + 0x38)
                unimplemented  {sar ebx, 0x1}
                sub_42b220(*(data_5317d8 + 0x38)) - *(*(arg1 - 4) + 0x3c)
                unimplemented  {sar esi, 0x1}
            
            int32_t eax_67 = *(*(arg1 - 4) + 0x38)
            var_8 = *(*(arg1 - 4) + 0x3c)
            esp = &var_8
            (*(**(arg1 - 4) + 0x7c))(var_8, eax_67)
    *(*(arg1 - 4) + 0x218) = 0
    void* esp_21
    
    if (*(*(arg1 - 4) + 0x217) != 1)
        *(esp - 4) = *((zx.d(*(*(arg1 - 4) + 0x213)) << 2) + &data_52ea24)
        *(esp - 8) = sub_4318d0(*(arg1 - 4))
        ShowWindow()
        esp_21 = esp
    else
        void* esp_8
        
        if (*(*(arg1 - 4) + 0x213) != 2)
            *(esp - 4) = *((zx.d(*(*(arg1 - 4) + 0x213)) << 2) + &data_52ea24)
            *(esp - 8) = sub_4318d0(*(arg1 - 4))
            ShowWindow()
            *(esp - 4) = *(*(arg1 - 4) + 0x38) | *(*(arg1 - 4) + 0x3c) << 0x10
            *(esp - 8) = 0
            *(esp - 0xc) = 5
            *(esp - 0x10) = sub_4318d0(*(arg1 - 4))
            *(esp - 0x14) = DefMDIChildProcA
            CallWindowProcA()
            esp_8 = esp
            *(arg1 - 4)
            sub_42b9bc()
        else
            *(esp - 4) = 0
            *(esp - 8) = sub_4318d0(*(arg1 - 4))
            *(esp - 0xc) = 0x223
            *(esp - 0x10) = *(*(data_5317d8 + 0x38) + 0x23c)
            SendMessageA()
            *(esp - 4) = 3
            *(esp - 8) = sub_4318d0(*(arg1 - 4))
            ShowWindow()
            esp_8 = esp
        
        *(esp_8 - 4) = 0
        *(esp_8 - 8) = 0
        *(esp_8 - 0xc) = 0x234
        *(esp_8 - 0x10) = *(*(data_5317d8 + 0x38) + 0x23c)
        SendMessageA()
        esp_21 = esp_8
    
    *(esp_21 + 8)
    TEB* fsbase
    fsbase->NtTib.ExceptionList = *esp_21
    *(esp_21 + 8) = 0x44602b
    void* result = *(arg1 - 4)
    *(result + 0x2cc) &= 0xfb
    return result
}
