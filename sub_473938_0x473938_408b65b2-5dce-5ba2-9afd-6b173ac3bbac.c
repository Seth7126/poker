// ============================================================
// 函数名称: sub_473938
// 虚拟地址: 0x473938
// WARP GUID: 408b65b2-5dce-5ba2-9afd-6b173ac3bbac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetDeviceCaps, GetDC
// [内部子函数调用]: sub_4471a4, sub_452f08, sub_404188, sub_402a38, sub_447198, sub_4318d0, sub_47a9a0, sub_52d910, sub_453040, sub_472b44, sub_403e1c, sub_469a6c, sub_47289c, sub_404280
// [被调用的父级函数]: sub_472ccc, sub_471144, sub_473684, sub_47326c, sub_478234, sub_473878
// ============================================================

int32_t __convention("regparm")sub_473938(int32_t* arg1, HWND arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    void* const var_14 = nullptr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    HWND hWnd = arg2
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (hWnd == 0)
        hWnd = sub_4318d0(arg1)
    
    HDC hdc = GetDC(hWnd)
    arg1[0x286] = hdc
    int32_t eax_2 = GetDeviceCaps(hdc, 0xc)
    arg1[0x339] = eax_2
    bool cond:1 = eax_2 == 8
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1
    
    if (eax_2 s> 8)
        HGLRC eax_28 = sub_452f08(0x20, 1, arg1[0x286], 0, 0, 0, 8)
        arg1[0x287] = eax_28
        sub_453040(arg1[0x286], eax_28)
        (*data_53081c)(0, 0, 0, 0x3f800000)
        var_c = 0x3ff00000
        var_10 = nullptr
        (*data_52ffd8)(var_10, var_c)
        var_c = 0xb44
        (*data_530034)(var_c)
        var_c = 0x1d01
        (*data_5303b0)(var_c)
        var_c = &data_52f524
        var_10 = 0x1203
        var_14 = 0x4000
        (*data_5306ec)(var_14, var_10, var_c)
        var_c = &data_52f534
        var_10 = 0x1201
        var_14 = 0x4000
        (*data_5306ec)(var_14, var_10, var_c)
        var_c = &data_52f534
        var_10 = 0x1202
        var_14 = 0x4000
        (*data_5306ec)(var_14, var_10, var_c)
        var_c = &data_52f544
        var_10 = 0x1200
        var_14 = 0x4000
        (*data_5306ec)(var_14, var_10, var_c)
        var_c = 0x4000
        (*data_530034)(var_c)
        sub_472b44()
        var_c = 0x203
        (*data_53051c)(var_c)
        var_c = 1
        var_10 = 0xcf5
        (*data_52ff18)(var_10, var_c)
        var_c = 0x303
        var_10 = 0x302
        (*data_530334)(var_10, var_c)
        var_c = 0xb71
        (*data_530034)(var_c)
        var_c = 0xb44
        (*data_530034)(var_c)
        var_c = 0xbe2
        (*data_53006c)(var_c)
        var_c = 0xbc0
        (*data_53006c)(var_c)
        var_c = 0xb57
        (*data_530034)(var_c)
        var_c = 0x1201
        var_10 = 0x408
        (*data_530560)(var_10, var_c)
        
        if (*(arg1 + 0xce9) == 0)
            var_c = 0xde1
            (*data_530034)(var_c)
        
        var_c = 0xb50
        (*data_530034)(var_c)
        var_c = 0x4000
        (*data_530034)(var_c)
        var_c = 0x4001
        (*data_530034)(var_c)
        var_c = &arg1[0x380]
        sub_47a9a0(arg1[0x45e], arg1[0x434], arg1, var_c)
        var_c = &arg1[0x381]
        sub_47a9a0(arg1[0x45f], arg1[0x434], arg1, var_c)
        var_c = &arg1[0x382]
        sub_47a9a0(arg1[0x460], arg1[0x434], arg1, var_c)
        var_c = &arg1[0x385]
        sub_47a9a0(arg1[0x461], arg1[0x434], arg1, var_c)
        var_c = &arg1[0x384]
        sub_47a9a0(arg1[0x462], arg1[0x434], arg1, var_c)
        var_c = &arg1[0x386]
        sub_47a9a0(arg1[0x463], arg1[0x434], arg1, var_c)
        var_c = &arg1[0x387]
        sub_47a9a0(arg1[0x464], arg1[0x434], arg1, var_c)
        
        if (arg1[0x384] != 1)
            data_5320b8 = 1
        else
            data_5320b8 = 0
        
        if (arg1[0x380] != 1)
            var_c = 0xb44
            (*data_53006c)(var_c)
        else
            var_c = 0xb44
            (*data_530034)(var_c)
        
        if (arg1[0x381] != 1)
            var_c = 0xb71
            (*data_53006c)(var_c)
        else
            var_c = 0xb71
            (*data_530034)(var_c)
        
        if (arg1[0x382] != 1)
            var_c = 0xb57
            (*data_530034)(var_c)
            
            if (arg1[0x382] == 2)
                var_c = 0x1600
                var_10 = 0x408
                (*data_530560)(var_10, var_c)
            
            if (arg1[0x382] == 3)
                var_c = 0x1200
                var_10 = 0x408
                (*data_530560)(var_10, var_c)
            
            if (arg1[0x382] == 4)
                var_c = 0x1201
                var_10 = 0x408
                (*data_530560)(var_10, var_c)
            
            if (arg1[0x382] == 5)
                var_c = 0x1202
                var_10 = 0x408
                (*data_530560)(var_10, var_c)
            
            if (arg1[0x382] == 6)
                var_c = 0x1602
                var_10 = 0x408
                (*data_530560)(var_10, var_c)
        else
            var_c = 0xb57
            (*data_53006c)(var_c)
        
        int32_t eax_111 = arg1[0x385]
        
        if (eax_111 != 1)
            if (eax_111 == 2)
                var_c = 0x1600
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 3)
                var_c = 0x1200
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 4)
                var_c = 0x1201
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 5)
                var_c = 0x1202
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 6)
                var_c = 0x1602
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 7)
                var_c = 0x1601
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 8)
                var_c = 0x1603
                var_10 = 0x1601
                var_14 = 0x404
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 2)
                var_c = 0x1600
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 3)
                var_c = 0x1200
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 4)
                var_c = 0x1201
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 5)
                var_c = 0x1202
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 6)
                var_c = 0x1602
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 7)
                var_c = 0x1601
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 8)
                var_c = 0x1603
                var_10 = 0x1601
                var_14 = 0x405
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 2)
                var_c = 0x1600
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 3)
                var_c = 0x1200
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 4)
                var_c = 0x1201
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 5)
                var_c = 0x1202
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 6)
                var_c = 0x1602
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 7)
                var_c = 0x1601
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
            
            if (arg1[0x385] == 8)
                var_c = 0x1603
                var_10 = 0x1601
                var_14 = 0x408
                (*data_530870)(var_14, var_10, var_c)
        
        var_c = 0xb60
        (*data_530034)(var_c)
        var_c = 0x46180400
        var_10 = 0xb65
        (*data_53016c)(var_10, var_c)
        var_c = 0x41400000
        var_10 = 0xb63
        (*data_53016c)(var_10, var_c)
        var_c = 0x42200000
        var_10 = 0xb64
        (*data_53016c)(var_10, var_c)
        sub_47289c(arg1, arg1[0xe], arg1[0xf])
        var_c = nullptr
        var_10 = nullptr
        var_14 = 0x3ff00000
        int32_t var_18_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_20_1 = 0
        int32_t var_24_1 = 0xc03e0000
        int32_t var_28_1 = 0
        ExceptionList = 0x40240000
        (*data_53035c)(0, 0, 0, 0x40490000, 0, 0x40340000, 0, 0, 0, ExceptionList, var_28_1, var_24_1, 
            var_20_1, var_1c_1, var_18_1, var_14, var_10, var_c)
        esp_1 = &var_8
    else
        *(arg1 + 0xce2) = 1
        sub_402a38(2, &var_c)
        sub_404280(1, 2, var_c, &var_8)
        sub_404188(var_8, 0x474198)
        int32_t eax_12
        int32_t ecx_2
        
        if (eax_2 != 8)
            *data_530a18
            int32_t eax_7 = sub_447198()
            *data_530a18
            eax_12, ecx_2 = sub_52d910(eax_7, sub_4471a4(), arg1[0x288], 0x10)
            esp_1 = &ExceptionList
            cond:1 = eax_12 == 0
        
        if (eax_2 == 8 || eax_12 s<= 0)
            sub_402a38(2, &var_14)
            sub_404280(1, 2, var_14, &var_10)
            esp_1 = &ExceptionList
            sub_404188(var_10, 0x474198)
            int32_t eax_24
            int32_t ecx_4
            
            if (not(cond:1))
                *data_530a18
                int32_t eax_19 = sub_447198()
                *data_530a18
                eax_24, ecx_4 = sub_52d910(eax_19, sub_4471a4(), arg1[0x288], 0x20)
                esp_1 = &ExceptionList
            
            if (cond:1 || eax_24 s<= 0)
                *(arg1 + 0xce3) = 0
            else
                *(arg1 + 0xce3) = sub_469a6c(ecx_4, 0x20)
        else
            *(arg1 + 0xce3) = sub_469a6c(ecx_2, 0x10)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_474187
    return sub_403e1c(&var_14, 4)
}
