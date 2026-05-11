// ============================================================
// 函数名称: sub_52de46
// 虚拟地址: 0x52de46
// WARP GUID: 5971e617-4104-5d57-81c3-39d4c11296ce
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4493c8, sub_449330, sub_449348, sub_406cd4, sub_448f34, sub_403c20
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_52de46(char* arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ ebp, int32_t arg5 @ esi, int32_t arg6 @ edi, int80_t arg7 @ st0) __noreturn
{
    // 第一条实际指令: int32_t var_4 = arg2
    int32_t var_4 = arg2
    *(arg5 + (arg1 << 3) - 0x1cdfffae) += arg2:1.b
    char* esi = arg5 - 1
    arg1.b += arg2:1.b
    void* ebx
    void* entry_ebx
    uint32_t* esp_1
    
    if (arg3 != 1)
        esp_1 = &__return_addr
    label_52dea5:
        void* ebx_5
        ebx_5.w = (entry_ebx - 1).w - 1
        ebx_5.w -= 1
        arg1 = *esp_1
        arg1[0x78004b58] += arg1:1.b
        ebx.w = (ebx_5 - 1).w - 1
        arg1.b += ebx:1.b
    label_52debb:
        esi[(arg4 << 1) + 0x4b] += (ebx - 1):1.b
        esi[arg4 << 1] += (ebx - 1).b
        ebx -= 2
    else
        void arg_47
        *(&arg_47 + arg6) += arg1.b
        *(&var_4 + arg6) += (arg3 - 1).b
        ebx = entry_ebx - 1
        *(arg4 + (arg2 << 1) + 0x4b) += arg1:1.b
        *((arg2 << 1) + 0xe358004b) += arg2:1.b
        esi -= 1
        *arg1 += (arg3 - 1):1.b
        
        if (arg3 == 1)
            goto label_52debb
        
        arg1[0x72] += arg1.b
        char* var_8_1 = arg1
        char temp0_1 = *arg1
        *arg1 += arg2.b
        
        if (temp0_1 + arg2.b u>= temp0_1)
            *(esi + ebx + 0x1e74004b) += arg1:1.b
            *(esi + ebx - 1 + 0x4b) += (arg3 - 1):1.b
            *(esi + ebx - 1) += (ebx - 1):1.b
            arg1:1.b += (ebx - 2).b
            int16_t ds
            uint32_t var_c = zx.d(ds)
            esp_1 = &var_c
            *(esi + ebx - 3 + 0x2ec4004b) += (arg3 - 1):1.b
            *(esi + arg4 + 0x4b) += (arg3 - 1).b
            (ebx - 4)[arg6 + 0x4b] += arg2.b
            (ebx - 4)[arg6] += arg2.b
            entry_ebx = ebx - 5
            arg1[(entry_ebx << 1) + 0x4b] += arg2:1.b
            arg1[entry_ebx << 1] += entry_ebx:1.b
            goto label_52dea5
    arg1.b += arg2.b
    int32_t eflags
    uint16_t* esi_1 = __outsb(arg2.w, *esi, esi, eflags)
    arg1[0x8004b6e] += arg1:1.b
    uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
    arg1.b += (ebx - 2).b
    uint16_t* esi_3 = __outsb(arg2.w, *esi_2, esi_2, eflags)
    arg1[0x6f] += arg1.b
    *arg1 += arg2.b
    uint16_t* esi_4 = __outsd(arg2.w, *esi_3, esi_3, eflags)
    arg1[0x6f] += (ebx - 5):1.b
    arg1[0x6f] += (arg3 - 1).b
    arg1[0x80004b6f] += arg2:1.b
    uint16_t* esi_5 = __outsd(arg2.w, *esi_4, esi_4, eflags)
    arg1.b += (arg3 - 1):1.b
    __outsd(arg2.w, *esi_5, esi_5, eflags)
    arg1[0x4c004b6f] += (ebx - 9):1.b
    *arg4
    char temp1 = *arg1
    *arg1 += arg1:1.b
    unimplemented  {enter 0x4e, 0x4c}
    arg7 f- float.t(*arg2)
    arg1.b = sbb.b(arg1.b, 0xda, temp1 + arg1:1.b u< temp1)
    *arg4 = arg2
    *(arg2 + ((ebx - 9) << 3) - 0x25abffae) += arg1.b
    *(arg4 - 4) = arg2
    *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg2 + ((ebx - 9) << 3) - 0x74aaffae) += (arg3 - 1).b
    arg1.b = __in_al_dx(arg2.w, eflags)
    sub_406cd4(sub_52dab4)
    *data_530660
    sub_449330()
    sub_449348(*data_530660, &data_4d5d18, data_530304)
    sub_448f34(*data_530660, "Poker 3D")
    sub_4493c8(*data_530660)
    sub_403c20()
    noreturn
}
