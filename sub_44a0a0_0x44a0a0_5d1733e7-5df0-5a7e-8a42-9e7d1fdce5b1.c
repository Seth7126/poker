// ============================================================
// 函数名称: sub_44a0a0
// 虚拟地址: 0x44a0a0
// WARP GUID: 5d1733e7-5df0-5a7e-8a42-9e7d1fdce5b1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: OffsetRect, ClientToScreen
// [内部子函数调用]: sub_4032ac, sub_42b31c, sub_4199a0, sub_42c754, sub_403e1c, sub_403e90, sub_449cec, sub_42a1dc, sub_44a04c, sub_403248, sub_447cd8, sub_449ef8, sub_42b904, sub_428b90, sub_440b24, sub_42b2f0, sub_4471a4, sub_449ec0, sub_447ca8, sub_42b180, sub_404754, sub_404688, sub_447dec
// [被调用的父级函数]: sub_449e50, sub_449d44
// ============================================================

void* __convention("regparm")sub_44a0a0(struct _EXCEPTION_REGISTRATION_RECORD* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_98 = ebx
    int32_t esi
    int32_t var_9c = esi
    int32_t edi
    int32_t var_a0 = edi
    int32_t var_90 = 0
    int32_t var_94 = 0
    int32_t var_10 = *arg2
    int32_t var_c = arg2[1]
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t var_64
    sub_404688(&var_64, sub_440678+0x110)
    int32_t* esi_4 = &var_8
    int32_t* var_a4 = &var_4
    int32_t (* var_a8)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    var_8->__offset(0x48).b = 0
    
    if (var_8->__offset(0x78).b == 0 || var_8->__offset(0x50).d == 0)
    label_44a3f1:
        uint32_t eax_92 = ebp_1[-0xc]
        
        if (eax_92 s<= 0)
            sub_449ec0(*esi_4)
        else
            sub_449cec(*esi_4, eax_92, 0)
    else
        char eax_4
        int32_t edx
        eax_4, edx = sub_440b24()
        
        if (eax_4 == 0)
            goto label_44a3f1
        
        edx.b = 1
        
        if (sub_447cd8(sub_42a1dc(&var_10)) != var_8->__offset(0x50).d)
            goto label_44a3f1
        
        var_64 = var_8->__offset(0x50).d
        int32_t var_5c_1 = var_10
        int32_t var_58_1 = var_c
        int32_t eax_12
        eax_12, ebp_1 = sub_449ef8()
        ebp_1[-0x15] += eax_12
        data_5317dc
        ebp_1[-0x14] = sub_4471a4()
        ebp_1[-0x13] = var_8->__offset(0x4c).d
        sub_42b180(var_8->__offset(0x50).d, &ebp_1[-0x20])
        __builtin_memcpy(&ebp_1[-0x12], &ebp_1[-0x20], 0x10)
        esi_4 = &var_8
        (*(**(*esi_4 + 0x50) + 0x3c))()
        ebp_1[-7] = 0
        ebp_1[-6] = 0
        int32_t* ebx_1 = *(*(*esi_4 + 0x50) + 0x24)
        
        if (ebx_1 == 0)
            int32_t* ebx_2 = *(*esi_4 + 0x50)
            
            if (sub_403248(ebx_2, 0x427f2c) != 0 && ebx_2[0x59] != 0)
                var_c = &ebp_1[-7]
                var_10 = ebx_2[0x59]
                ClientToScreen(var_10, var_c)
        else
            (*(*ebx_1 + 0x3c))()
        
        var_c = ebp_1[-6] - ebp_1[-4]
        var_10 = ebp_1[-7] - ebp_1[-5]
        void* lprc = &ebp_1[-0x12]
        OffsetRect(lprc, var_10, var_c)
        sub_42b31c(*(*esi_4 + 0x50), &ebp_1[-3], &ebp_1[-0x22])
        ebp_1[-0xe] = ebp_1[-0x22]
        ebp_1[-0xd] = ebp_1[-0x21]
        sub_447ca8(*(*esi_4 + 0x50), &ebp_1[-0x24])
        sub_428b90(ebp_1[-0x24], &ebp_1[-0x23])
        sub_403e90(&ebp_1[-0xa], ebp_1[-0x23])
        ebp_1[-0xc] = 0
        ebp_1[-0xb] = *(*esi_4 + 0x64)
        ebp_1[-0x17] = data_52e978
        ebp_1[-9] = 0
        var_c = &ebp_1[-0x18]
        sub_42c754(*(*esi_4 + 0x50), var_c)
        esp = &var_8
        *(ebp_1 - 0x1d) = true
        
        if (*(ebp_1 - 0x1d) != 0 && *(*esi_4 + 0x10a) != 0)
            var_c = &ebp_1[-0x18]
            void* ebx_3 = *esi_4
            *(ebx_3 + 0x10c)
            (*(ebx_3 + 0x108))(var_c)
            esp = &var_8
        
        void* const eax_51
        
        if (*(ebp_1 - 0x1d) == 0 || *(*esi_4 + 0x50) == 0)
            eax_51 = nullptr
        else
            eax_51.b = 1
        
        void* edx_11 = *esi_4
        *(edx_11 + 0x48) = eax_51.b
        
        if (*(*esi_4 + 0x48) == 0 || ebp_1[-0xa] == 0)
            goto label_44a3f1
        
        var_c = ebp_1
        sub_44a04c(ebp_1[-0x17], edx_11)
        int32_t edx_12
        edx_12.b = *(*(*esi_4 + 0x50) + 0x4f)
        (*(**(*esi_4 + 0x74) + 0x68))()
        var_c = ebp_1[-9]
        var_10 = &ebp_1[-0x1c]
        ebp_1[-0xa]
        ebp_1[-0x14]
        (*(**(*esi_4 + 0x74) + 0xc0))(var_10, var_c)
        var_c = ebp_1[-0x15]
        var_10 = ebp_1[-0x16]
        lprc = &ebp_1[-0x1c]
        OffsetRect(lprc, var_10, var_c)
        int32_t ebx_4
        ebx_4.w = 0xffce
        
        if (sub_4032ac(*(*esi_4 + 0x74)) != 0)
            int32_t eax_72 = sub_4199a0(*(*(*esi_4 + 0x74) + 0x1f0), ebp_1[-0xa]) + 5
            ebp_1[-0x1c] -= eax_72
            int32_t eax_77 = sub_4199a0(*(*(*esi_4 + 0x74) + 0x1f0), ebp_1[-0xa]) + 5
            ebp_1[-0x1a] -= eax_77
        
        sub_42b2f0(*(*esi_4 + 0x50), &ebp_1[-0x12], &ebp_1[-0x22])
        void* eax_80 = *esi_4
        *(eax_80 + 0x54) = ebp_1[-0x22]
        *(eax_80 + 0x58) = ebp_1[-0x21]
        sub_42b2f0(*(*esi_4 + 0x50), &ebp_1[-0x10], &ebp_1[-0x22])
        void* eax_83 = *esi_4
        *(eax_83 + 0x5c) = ebp_1[-0x22]
        *(eax_83 + 0x60) = ebp_1[-0x21]
        sub_42b904(*(*esi_4 + 0x74), ebp_1[-0x13])
        var_c = ebp_1[-9]
        ebp_1[-0xa]
        esp = &var_8
        sub_447dec((*(**(*esi_4 + 0x74) + 0xbc))(var_c))
        uint32_t eax_89 = ebp_1[-0xc]
        
        if (eax_89 s<= 0)
            sub_449cec(*esi_4, ebp_1[-0xb], 1)
        else
            sub_449cec(*esi_4, eax_89, 0)
    
    esp[2]
    fsbase->NtTib.ExceptionList = *esp
    esp[2] = sub_44a43f
    sub_403e1c(&ebp_1[-0x24], 2)
    sub_404754(&ebp_1[-0x18], sub_440678+0x110)
    return &ebp_1[-0x18]
}
