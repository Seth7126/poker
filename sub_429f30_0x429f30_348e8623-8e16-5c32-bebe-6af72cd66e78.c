// ============================================================
// 函数名称: sub_429f30
// 虚拟地址: 0x429f30
// WARP GUID: 348e8623-8e16-5c32-bebe-6af72cd66e78
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetCursor
// [内部子函数调用]: sub_4030d0, sub_403248, sub_403260, sub_428ec4, sub_4448d8, sub_42c754, sub_4296ec, sub_440ee0, sub_429ec0, sub_4331a8, sub_4297e4
// [被调用的父级函数]: sub_428fa4, sub_428ed8, sub_42a190
// ============================================================

void* __convention("regparm")sub_429f30(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t* ebx = nullptr
    void* result = nullptr
    int32_t var_c = 0
    char var_d = 0
    
    if (data_531764 != 0)
        result = data_531764
        
        if (*(result + 0x30) == 0)
            int32_t* var_20 = &__saved_ebp
            int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList_1
            int32_t var_c_1 = data_531764
            int32_t* var_2c = &__saved_ebp
            int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            *(data_531764 + 0x30) = 1
            data_531764
            int32_t ecx
            sub_428ec4(ecx, data_53176c)
            
            if (data_531780 == 2)
                int32_t* eax_3 = data_531764
                sub_403260(eax_3, 0x426f44)
                ebx = eax_3
                (*(*ebx + 0x30))()
                ebx[0x1b].b = ebx[1] == 0
            
            char eax_9
            
            if (*(data_531764 + 4) != 0)
                eax_9 = sub_403248(*(data_531764 + 4), &data_4279b4)
            
            if (*(data_531764 + 4) == 0 || eax_9 == 0)
                void* eax_11 = data_531764
                int32_t var_18_1 = *(eax_11 + 0xc)
                int32_t var_14_1 = *(eax_11 + 0x10)
            else
                void* eax_10 = data_531764
                int32_t var_18 = *(eax_10 + 0x14)
                int32_t var_14 = *(eax_10 + 0x18)
            
            int32_t eax_12
            
            if (sub_429ec0(&__saved_ebp).b == 0)
                eax_12 = 0
            else if (data_531780 != 2 || ebx[0x1b].b == 0)
                if (data_531780 == 0)
                    eax_12 = 0
                else
                    eax_12.b = 1
                    
                    if (sub_4297e4(eax_12).b == 0 || arg1 == 0)
                        eax_12 = 0
                    else
                        eax_12.b = 1
            else if (arg1 != 0)
                eax_12.b = 1
            else
                eax_12 = 0
            
            if (data_531780 != 2)
                if (data_531784 == 0)
                    SetCursor(data_531778)
                else
                    sub_4331a8(data_531784)
            else if (eax_12.b != 0 && ebx[0x1b].b != 0)
                int32_t* eax_14 = sub_440ee0(ebx[0xe])
                
                if (eax_14 != 0 && eax_14[0x82] == ebx[0xe])
                    ebp = sub_4448d8(eax_14, nullptr)
                
                sub_42c754(data_531760, data_531764)
            
            data_531760 = 0
            data_531764 = 0
            
            if (*(ebp[-2] + 4) != 0)
                void* eax_19
                eax_19.b = 3
                
                if (*(ebp - 9) == 0)
                    eax_19.b = 4
                    *(ebp[-2] + 0xc) = 0
                    *(ebp[-2] + 0x10) = 0
                    ebp[-5] = 0
                    ebp[-4] = 0
                
                sub_4296ec(ebp[-2], eax_19, *(ebp[-2] + 8), ebp[-2] + 0xc, *(ebp[-2] + 4))
            
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_42a15d
            sub_4030d0(data_53178c)
            data_53178c = 0
            *(ebp[-2] + 0x30) = 0
            struct _EXCEPTION_REGISTRATION_RECORD* var_30_1 = ebp[-4]
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
            ExceptionList_2.b = *(ebp - 9)
            ExceptionList = ExceptionList_2
            *(ebp[-2] + 4)
            ebp[-5]
            (**ebp[-2])(ExceptionList, var_30_1, var_2c_1)
            data_531764 = 0
            return 0
    
    return result
}
