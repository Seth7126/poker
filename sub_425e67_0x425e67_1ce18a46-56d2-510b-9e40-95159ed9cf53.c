// ============================================================
// 函数名称: sub_425e67
// 虚拟地址: 0x425e67
// WARP GUID: 1ce18a46-56d2-510b-9e40-95159ed9cf53
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SetWindowPos, SendMessageA
// [内部子函数调用]: sub_4030d0, sub_4318d0, sub_42eac0, sub_425aac, sub_425cb8, sub_425b2c
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_425e67(int32_t arg1, char arg2, int32_t arg3 @ edi, int32_t arg4)
{
    // 第一条实际指令: *(arg1 * 3 + 0x53) += arg1.b
    *(arg1 * 3 + 0x53) += arg1.b
    void* const* var_4 = &__return_addr
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2 + 1
    var_4[0xe]
    int32_t cy = var_4[0xf]
    int32_t cx = sub_42eac0(var_4)
    SetWindowPos(sub_4318d0(var_4), nullptr, var_4[0xc], var_4[0xd], cx, cy, 0x14)
    
    if (var_4[0x83] != 0)
        SendMessageA(sub_4318d0(var_4), 0x192, 1, &var_4[0x83])
    
    int32_t result = sub_425aac(var_4)
    
    if (var_4[0x84] != 0)
        (*(*var_4[0x7c] + 8))(arg3 - 1)
        sub_425cb8(var_4, var_4[0x85])
        sub_425b2c(var_4, var_4[0x86])
        sub_4030d0(var_4[0x84])
        result = 0
        var_4[0x84] = 0
    
    return result
}
