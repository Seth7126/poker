// ============================================================
// 函数名称: sub_520a94
// 虚拟地址: 0x520a94
// WARP GUID: 4232d34b-644a-5405-bf0a-c1be76db9b21
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4748fc, sub_51b730, sub_4040c4, sub_404138, sub_4837ec, sub_4d6664, sub_408e1c, sub_404080, sub_40401c, sub_46910c, sub_403e1c, sub_4c0924
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t __convention("regparm")sub_520a94(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* esp_2 = &var_4
    int32_t* ebp_1 = &var_4
    int32_t i_1 = 7
    int32_t i
    
    do
        *(esp_2 - 4) = 0
        *(esp_2 - 8) = 0
        esp_2 -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t entry_ebx
    *(esp_2 - 4) = entry_ebx
    char edx
    char var_5 = edx
    *(esp_2 - 8) = &var_4
    *(esp_2 - 0xc) = j_sub_4037f0
    TEB* fsbase
    *(esp_2 - 0x10) = fsbase->NtTib.ExceptionList
    void* esp_6 = esp_2 - 0x10
    fsbase->NtTib.ExceptionList = esp_6
    
    if (*(*data_530454 + 0x1e3) == 0 && *(*data_5301f4 + 0x4584) s> 0)
        void var_10
        int32_t ecx_1
        void* ebp_2
        ecx_1, ebp_2 = sub_46910c(*data_530304, "f_erreich1", &var_10)
        *(esp_6 - 4) = *(ebp_2 - 0xc)
        sub_40401c(ecx_1, arg1 + 0x6299)
        sub_4040c4(ebp_2 - 8, *(esp_6 - 4), *(ebp_2 - 0x10))
        int32_t ebx_1 = *(*data_5301f4 + 0x4584)
        
        if (ebx_1 != 1)
            *(esp_6 - 4) = *(ebp_2 - 8)
            void* ebp_4 = sub_46910c(*data_530304, "f_erreich2", ebp_2 - 0x20)
            *(esp_6 - 8) = *(ebp_4 - 0x20)
            sub_408e1c(ebx_1, ebp_4 - 0x24)
            *(esp_6 - 0xc) = *(ebp_4 - 0x24)
            ebp_1 = sub_46910c(*data_530304, "f_erreich4", ebp_4 - 0x28)
            *(esp_6 - 0x10) = ebp_1[-0xa]
            sub_404138(&ebp_1[-2], 4)
        else
            *(esp_6 - 4) = *(ebp_2 - 8)
            void* ebp_3 = sub_46910c(*data_530304, "f_erreich2", ebp_2 - 0x14)
            *(esp_6 - 8) = *(ebp_3 - 0x14)
            sub_408e1c(ebx_1, ebp_3 - 0x18)
            *(esp_6 - 0xc) = *(ebp_3 - 0x18)
            ebp_1 = sub_46910c(*data_530304, "f_erreich3", ebp_3 - 0x1c)
            *(esp_6 - 0x10) = ebp_1[-7]
            sub_404138(&ebp_1[-2], 4)
        
        *data_5300d0
        
        if (sub_4c0924() == 0 && *(ebp_1 - 1) == 0)
            sub_404080(&ebp_1[-2], U"\r")
        
        *data_5300d0
        sub_4837ec(*data_530304, *data_5305b4, false)
        sub_4837ec(*data_530304, *data_530894, false)
        *data_530304
        sub_51b730()
        
        if (*(*data_5301f4 + 0x111f9) == 0)
            if (*(*data_5301f4 + 0x111f8) == 0)
                *(esp_6 - 4) = 0
                void* ebp_6 = sub_46910c(*data_530304, "f_weiter", &ebp_1[-0xd])
                *(esp_6 - 8) = *(ebp_6 - 0x34)
                *(esp_6 - 0xc) = 1
                *(esp_6 - 0x10) = 0
                esp_6 -= 0x10
                ebp_1 = sub_46910c(*data_530304, "f_spielergebnis", ebp_6 - 0x38)
                sub_4748fc(*data_530304, ebp_1[-2], ebp_1[-0xe])
            else
                sub_4837ec(*data_530304, *data_5307c8, false)
                *(esp_6 - 4) = 0
                void* ebp_5 = sub_46910c(*data_530304, "f_weiter", &ebp_1[-0xb])
                *(esp_6 - 8) = *(ebp_5 - 0x2c)
                *(esp_6 - 0xc) = 1
                *(esp_6 - 0x10) = 0
                esp_6 -= 0x10
                ebp_1 = sub_46910c(*data_530304, "f_turnierergebnis", ebp_5 - 0x30)
                sub_4748fc(*data_530304, ebp_1[-2], ebp_1[-0xc])
                sub_4837ec(*data_530304, *data_5307c8, false)
    
    *(esp_6 + 8)
    fsbase->NtTib.ExceptionList = *esp_6
    *(esp_6 + 8) = sub_520d3e
    return sub_403e1c(&ebp_1[-0xe], 0xd)
}
