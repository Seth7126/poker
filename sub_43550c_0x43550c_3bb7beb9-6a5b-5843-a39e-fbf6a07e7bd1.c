// ============================================================
// 函数名称: sub_43550c
// 虚拟地址: 0x43550c
// WARP GUID: 3bb7beb9-6a5b-5843-a39e-fbf6a07e7bd1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetCursorPos, SetCursor, PeekMessageA
// [内部子函数调用]: sub_42bdf4, sub_42b31c, sub_4341d8, sub_4350cc, sub_403e4c, sub_42b690, sub_44763c, sub_435478, sub_4318d0, sub_43025c, sub_407800, sub_403248, sub_44613c, sub_42c2ec, sub_403df8, sub_4351dc, sub_42b778, sub_42b180, sub_42a190, sub_43512c, sub_43540c
// [被调用的父级函数]: sub_43390b
// ============================================================

void* __convention("regparm")sub_43550c(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_50 = ebx
    int32_t esi
    int32_t var_54 = esi
    int32_t edi
    int32_t var_58 = edi
    char* var_4c = nullptr
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t* var_5c = &var_4
    int32_t (* var_60)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax = *arg2
    int32_t point_1
    int32_t var_14
    
    if (eax s<= 0x202)
        int32_t point
        
        if (eax == 0x202)
            if (var_8->__offset(0x60).d != 0)
                sub_43512c(var_8)
            else
                sub_407800(arg2[2], &point)
                sub_4341d8(var_8, &point, &var_14)
        else
            int32_t var_44
            
            if (eax == 0x20)
                GetCursorPos(&point)
                sub_42b31c(var_8->__offset(0x14).d, &point, &point_1)
                point = point_1
                int32_t var_c_1 = var_44
                
                if (arg2[2].w == 1 && sub_4318d0(var_8->__offset(0x14).d) == arg2[1]
                        && sub_43025c(var_8->__offset(0x14).d) s> 0)
                    sub_4341d8(var_8, &point, &var_14)
            else if (eax == 0x200)
                if (var_8->__offset(0x60).d != 0)
                    sub_4351dc(var_8)
                    sub_407800(arg2[2], &point_1)
                    struct _EXCEPTION_REGISTRATION_RECORD* eax_12 = var_8
                    eax_12->__offset(0x50).d = point_1
                    eax_12->__offset(0x54).d = var_44
                    sub_435478(&var_4)
                    sub_4351dc(var_8)
            else if (eax == 0x201)
                sub_407800(arg2[2], &point)
                sub_4341d8(var_8, &point, &var_14)
        goto label_4358be
    
    struct _EXCEPTION_REGISTRATION_RECORD** esp
    
    if (eax == 0x203)
        sub_407800(arg2[2], &point_1)
        sub_4341d8(var_8, &point_1, &var_14)
    label_4358be:
        void* ebx_2 = ebp_1[-1]
        *(ebx_2 + 0x34)
        (*(ebx_2 + 0x30))()
        esp = &var_8
    else
        if (eax != 0xb030)
            if (eax == 0xb042)
                int32_t* eax_7 = arg2[2]
                
                if (*eax_7 == 0xb00b)
                    sub_43540c(var_8, arg2[1], (eax_7[1]).b)
            
            goto label_4358be
        
        struct _EXCEPTION_REGISTRATION_RECORD* esi_1 = var_8
        esi_1->__offset(0x34).d
        esi_1->__offset(0x30).d()
        esp = &var_8
        
        if (arg2[3] == 0)
            arg2[2]
            EXCEPTION_DISPOSITION eax_55 = var_8->Next->Handler()
            
            if (var_14 == 0x12)
                sub_403df8(arg2[2] + 0x38)
            else if (eax_55 != ExceptionContinueExecution)
                int32_t eax_58 = var_14
                
                if (eax_58 == 2 || eax_58 == 0x14)
                    int32_t var_24
                    sub_42b180(eax_55, &var_24)
                    int32_t ecx_10 = var_8->Next->Next()
                    var_24 -= (var_24 - *(eax_55 + 0x30)) * 2
                    int32_t var_1c
                    int32_t var_1c_1 = var_1c - (*(eax_55 + 0x38) - (var_1c - var_24)) * 2
                    int32_t var_20
                    int32_t var_18
                    int32_t var_18_1 = var_18
                        - (*(eax_55 + 0x3c) - (var_18 - (var_20 - (var_20 - *(eax_55 + 0x34)) * 2)))
                        * 2
                    sub_42b778(ecx_10, &var_4c)
                    sub_403e4c(arg2[2] + 0x38, var_4c)
                    __builtin_memcpy(arg2[2] + 0x18, &var_24, 0x10)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_4358e4
    sub_403df8(&ebp_1[-0x12])
    return &ebp_1[-0x12]
}
