// ============================================================
// 函数名称: sub_4f4638
// 虚拟地址: 0x4f4638
// WARP GUID: 27698fb0-0e8c-5139-b0d4-82aaa85254b0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4f0c7c, sub_403010
// [被调用的父级函数]: sub_4f8b60
// ============================================================

int32_tsub_4f4638(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    *(arg1 - 4) = 0xcd
    *(arg1 - 8) = 0xffffff6a
    *(arg1 - 0xc) = 0xfffffd7d
    
    if (*(arg1 - 0xd) != 0)
        (*data_530810)()
        sub_4f0c7c(0xbe2)
        (*data_530334)(0x302, 0x303)
        (*data_530518)(0, 0, 0, 
            fconvert.s((float.t(*(data_530598 + 0x3bc)) / fconvert.t(2f) + fconvert.t(24f))
                / fconvert.t(99f)))
        (*data_53006c)(0xde1)
    else
        (*data_530810)()
        (*data_530034)(0xde1)
        (*data_53036c)(0xde1, sx.d(*(*data_530304 + 0x932)))
        (*data_53006c)(0xb50)
    
    (*data_5301d4)(0xbee147ae, 0xc0666666, 0xc0266666)
    (*data_5301d4)(0, 0x4019999a, 0x3e4ccccd)
    int32_t eax_30 = *(arg1 - 8)
    
    if (neg.d(eax_30) == 0x80000000)
        sub_403010()
        noreturn
    
    (*data_5301d4)(
        fconvert.s(float.t(*(arg1 - 4)) / fconvert.t(100f) - data_4f499c + data_4f49a8
            + fconvert.t(0f)), 
        fconvert.s(float.t(neg.d(eax_30)) / fconvert.t(100f) + data_4f4990), 
        fconvert.s(fconvert.t(-9f) - float.t(*(arg1 - 0xc)) / fconvert.t(100f)))
    *(arg1 - 0x14) = 0
    *(arg1 - 0x18) = 0x3ca3d70a
    *(arg1 - 0x1c) = 0x4093d70a
    *(arg1 - 0x20) = 0xc0680000
    *(arg1 - 0x24) = 0
    *(arg1 - 0x28) = *(arg1 - 0x20)
    *(arg1 - 0x2c) = *(arg1 - 0x1c)
    *(arg1 - 0x30) = fconvert.s(fconvert.t(*(arg1 - 0x14)) - data_4f49b8 * fconvert.t(*(arg1 - 0x2c)))
    *(arg1 - 0x34) = *(arg1 - 0x18)
    *(arg1 - 0x2c) = fconvert.s(data_4f49c4 * fconvert.t(*(arg1 - 0x2c)))
    *(arg1 - 0x28) = fconvert.s(data_4f49d0 * fconvert.t(*(arg1 - 0x28)))
    (*data_52ffd4)(6)
    (*data_5307f8)(0x3f000000, 0x3f000000)
    (*data_530368)(
        fconvert.s(fconvert.t(*(arg1 - 0x2c)) / fconvert.t(2f) + fconvert.t(*(arg1 - 0x30))), 
        fconvert.s(fconvert.t(*(arg1 - 0x28)) / fconvert.t(2f) + fconvert.t(*(arg1 - 0x34))), 
        *(arg1 - 0x24))
    (*data_5307f8)(0, 0x3f800000)
    (*data_530368)(*(arg1 - 0x30), *(arg1 - 0x34), *(arg1 - 0x24))
    (*data_5307f8)(0, 0)
    (*data_530368)(*(arg1 - 0x30), fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), 
        *(arg1 - 0x24))
    (*data_5307f8)(0x3f800000, 0)
    (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), 
        fconvert.s(fconvert.t(*(arg1 - 0x34)) + fconvert.t(*(arg1 - 0x28))), *(arg1 - 0x24))
    (*data_5307f8)(0x3f800000, 0x3f800000)
    (*data_530368)(fconvert.s(fconvert.t(*(arg1 - 0x30)) + fconvert.t(*(arg1 - 0x2c))), *(arg1 - 0x34), 
        *(arg1 - 0x24))
    (*data_5307f8)(0, 0x3f800000)
    (*data_530368)(*(arg1 - 0x30), *(arg1 - 0x34), *(arg1 - 0x24))
    return (*data_530a08)()
}
